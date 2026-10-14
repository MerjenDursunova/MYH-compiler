#!/usr/bin/env python3
import subprocess
import re
import tempfile
import os
import sys

def run_test(code, expected):
    """Run the compiler on `code`. Return True if (expected == 'OK' and exit 0)
       or (expected == 'FAIL' and exit != 0)."""
    with tempfile.NamedTemporaryFile(mode='w', suffix='.myh', delete=False) as f:
        f.write(code)
        tmpfile = f.name

    result = subprocess.run(["./myh", tmpfile], capture_output=True, text=True)
    os.unlink(tmpfile)

    return (expected == "OK" and result.returncode == 0) or \
           (expected == "FAIL" and result.returncode != 0)

def main():
    if not os.path.exists("./myh"):
        print("Error: ./myh not found", file=sys.stderr)
        sys.exit(1)

    tests = []
    current_rule = None

    with open("test.gunit", "r") as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("#"):
                continue
            if line.endswith(":"):
                current_rule = line[:-1].strip()
                continue
            match = re.match(r'"(.*)"\s*->\s*(OK|FAIL)', line)
            if match and current_rule:
                tests.append((current_rule, match.group(1), match.group(2)))

    passed = 0
    for rule, code, expected in tests:
        result = run_test(code, expected)
        status = "OK" if result else "FAIL"
        if result:
            print(f"{rule}: \"{code}\" -> {status}")
            passed += 1
        else:
            print(f"{rule}: \"{code}\" -> {status} (expected {expected})")

    print(f"\nPassed: {passed}/{len(tests)}")

if __name__ == "__main__":
    main()