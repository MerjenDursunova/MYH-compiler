cat >run_tests.sh <<'EOF'
#!/bin/bash

echo "// test.gunit style output"
echo "// MYH Grammar Tests"
echo ""

run_test() {
    local rule="$1"
    local input="$2"
    
    echo -n "$rule: \"$input\" -> "
    
    # Write full program context if needed
    if [ "$rule" = "program" ] || [ "$rule" = "prog" ]; then
        echo "$input" > temp.sy
    elif [ "$rule" = "declaration" ] || [ "$rule" = "decl" ]; then
        echo "int main() { $input return 0; }" > temp.sy
    elif [ "$rule" = "assignment" ] || [ "$rule" = "assign" ]; then
        echo "int main() { int x; $input return 0; }" > temp.sy
    elif [ "$rule" = "ifStmt" ]; then
        echo "int main() { $input else { return 0; } }" > temp.sy
    elif [ "$rule" = "returnStmt" ]; then
        echo "int main() { $input }" > temp.sy
    elif [ "$rule" = "expr" ]; then
        echo "int main() { int x = $input; return x; }" > temp.sy
    else
        echo "$input" > temp.sy
    fi
    
    # Run parser
    if ./myh temp.sy > /dev/null 2>&1; then
        echo "OK"
    else
        echo "FAIL"
    fi
}

# Program tests
run_test "program" "int main() { int a = 1+2; return 0; }"
run_test "program" "int main() { return 0; }"
run_test "program" "int add(int x, int y) { return x+y; } int main() { return 0; }"

# Declaration tests  
run_test "declaration" "int a = 5;"
run_test "declaration" "int b = 1+2*3;"
run_test "declaration" "const int c = 10;"
run_test "declaration" "const int x = 5 % 3, C[9/4] = {2 * 6 / 4, 2 + 6 % 4}, y = 5;"

# Assignment tests
run_test "assignment" "x = 42;"

# If statement tests
run_test "ifStmt" "if (x > 0) { return 1; }"

# Return statement tests
run_test "returnStmt" "return 5;"

# Expression tests
run_test "expr" "1+2"
run_test "expr" "1+2*3"
run_test "expr" "(1+2)*3"
run_test "expr" "5 % 3"
run_test "expr" "2 * 6 / 4"
run_test "expr" "2 + 6 % 4"

# Negative tests (should FAIL)
run_test "program" "int main() { int a = ; return 0; }"
run_test "declaration" "int = 5;"
run_test "assignment" "= 42;"
run_test "expr" "1++2"

echo ""
echo "=== Test Summary ==="
rm -f temp.sy
EOF

chmod +x run_tests.sh
./run_tests.sh
