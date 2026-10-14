#!/usr/bin/env python3
import subprocess
import tempfile
import tkinter as tk
from pathlib import Path
from tkinter import filedialog, messagebox, scrolledtext


ROOT = Path(__file__).resolve().parent
COMPILER = ROOT / "myh"
DEFAULT_PROGRAM = """int sumGrid(int bias) {
    int grid[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int i = 0;
    int j = 0;
    int total = 0;

    while (i < 2) {
        j = 0;
        while (j < 3) {
            total = total + grid[i][j];
            j = j + 1;
        }
        i = i + 1;
    }

    if (total > 20 && bias > 0) {
        total = total + bias;
    } else {
        total = total - 1;
    }

    return total;
}

int main() {
    int a = 4, b = 2 + 3;
    int answer = sumGrid(a + b);
    return answer;
}
"""


class MYHGui(tk.Tk):
    def __init__(self):
        super().__init__()
        self.title("MYH Compiler GUI")
        self.geometry("1180x760")
        self.configure(bg="#f5f7fb")

        self.current_file = None
        self._build_ui()
        self.editor.insert("1.0", DEFAULT_PROGRAM)

    def _build_ui(self):
        toolbar = tk.Frame(self, bg="#e8edf5", padx=10, pady=8)
        toolbar.pack(fill=tk.X)

        tk.Button(toolbar, text="Open", width=10, command=self.open_file).pack(side=tk.LEFT, padx=(0, 8))
        tk.Button(toolbar, text="Save", width=10, command=self.save_file).pack(side=tk.LEFT, padx=(0, 8))
        tk.Button(toolbar, text="Run", width=10, command=self.run_compiler).pack(side=tk.LEFT, padx=(0, 8))
        tk.Button(toolbar, text="Load Demo", width=12, command=self.load_demo).pack(side=tk.LEFT)

        self.status = tk.StringVar(value="Ready")
        tk.Label(toolbar, textvariable=self.status, bg="#e8edf5", fg="#334155").pack(side=tk.RIGHT)

        body = tk.PanedWindow(self, orient=tk.VERTICAL, sashrelief=tk.RAISED, bg="#d8dee9")
        body.pack(fill=tk.BOTH, expand=True, padx=10, pady=10)

        top = tk.PanedWindow(body, orient=tk.HORIZONTAL, sashrelief=tk.RAISED, bg="#d8dee9")

        editor_frame = tk.LabelFrame(top, text="Source Program", padx=8, pady=8, bg="#f5f7fb")
        self.editor = scrolledtext.ScrolledText(
            editor_frame,
            wrap=tk.NONE,
            font=("Menlo", 13),
            undo=True,
            bg="#ffffff",
            fg="#111827",
            insertbackground="#111827",
        )
        self.editor.pack(fill=tk.BOTH, expand=True)
        top.add(editor_frame, minsize=520)

        asm_frame = tk.LabelFrame(top, text="Assembly Preview", padx=8, pady=8, bg="#f5f7fb")
        self.asm = scrolledtext.ScrolledText(
            asm_frame,
            wrap=tk.NONE,
            font=("Menlo", 12),
            bg="#0f172a",
            fg="#bfdbfe",
            insertbackground="#bfdbfe",
        )
        self.asm.pack(fill=tk.BOTH, expand=True)
        top.add(asm_frame, minsize=420)
        body.add(top, minsize=470)

        output_frame = tk.LabelFrame(body, text="Final Result", padx=8, pady=8, bg="#f5f7fb")
        self.output = scrolledtext.ScrolledText(
            output_frame,
            height=8,
            wrap=tk.WORD,
            font=("Menlo", 12),
            bg="#111827",
            fg="#d1fae5",
            insertbackground="#d1fae5",
        )
        self.output.pack(fill=tk.BOTH, expand=True)
        body.add(output_frame, minsize=160)

    def load_demo(self):
        demo = ROOT / "extra-test-cases" / "lvl14_demo.sy"
        if demo.exists():
            self.editor.delete("1.0", tk.END)
            self.editor.insert("1.0", demo.read_text())
            self.current_file = demo
            self.status.set(f"Loaded {demo.name}")
        else:
            self.editor.delete("1.0", tk.END)
            self.editor.insert("1.0", DEFAULT_PROGRAM)
            self.status.set("Loaded built-in demo")

    def open_file(self):
        path = filedialog.askopenfilename(
            initialdir=ROOT,
            filetypes=[("MYH/SysY source", "*.sy *.myh"), ("All files", "*.*")],
        )
        if not path:
            return

        self.current_file = Path(path)
        self.editor.delete("1.0", tk.END)
        self.editor.insert("1.0", self.current_file.read_text())
        self.status.set(f"Opened {self.current_file.name}")

    def save_file(self):
        if self.current_file is None:
            path = filedialog.asksaveasfilename(
                initialdir=ROOT,
                defaultextension=".sy",
                filetypes=[("MYH/SysY source", "*.sy *.myh"), ("All files", "*.*")],
            )
            if not path:
                return
            self.current_file = Path(path)

        self.current_file.write_text(self.editor.get("1.0", tk.END))
        self.status.set(f"Saved {self.current_file.name}")

    def run_compiler(self):
        if not COMPILER.exists():
            messagebox.showerror("Compiler missing", "Run `make build` before using the GUI.")
            return

        source = self.editor.get("1.0", tk.END)
        with tempfile.NamedTemporaryFile("w", suffix=".sy", delete=False) as tmp:
            tmp.write(source)
            tmp_path = Path(tmp.name)

        try:
            asm_result = subprocess.run(
                [str(COMPILER), "--emit-asm", str(tmp_path)],
                cwd=ROOT,
                text=True,
                capture_output=True,
                timeout=5,
            )
            result = subprocess.run(
                [str(COMPILER), str(tmp_path)],
                cwd=ROOT,
                text=True,
                capture_output=True,
                timeout=5,
            )
        finally:
            tmp_path.unlink(missing_ok=True)

        self.asm.delete("1.0", tk.END)
        self.output.delete("1.0", tk.END)

        if asm_result.returncode == 0:
            self.asm.insert(tk.END, asm_result.stdout)
        else:
            self.asm.insert(tk.END, asm_result.stderr or asm_result.stdout or "Assembly generation failed.\n")

        if result.returncode == 0 and asm_result.returncode == 0:
            self.output.insert(tk.END, f"Program result: {result.stdout.strip()}\n")
            self.status.set("Run finished successfully")
        else:
            self.output.insert(tk.END, result.stderr or result.stdout or "Compiler failed.\n")
            self.status.set("Run failed")


if __name__ == "__main__":
    MYHGui().mainloop()
