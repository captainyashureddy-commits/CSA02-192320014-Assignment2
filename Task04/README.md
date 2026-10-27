# Task04 — GCC Compilation Stages and Error Identification

## Objective

To understand the four stages of GCC compilation and identify common errors in C programming.

## GCC Compilation Stages

### 1. Preprocessing
The preprocessor handles header files and macros.

Command: `gcc -E main.c -o main.i`

Output: `main.i`

### 2. Compilation
The compiler converts preprocessed C code into assembly language.

Command: `gcc -S main.i -o main.s`

Output: `main.s`

### 3. Assembly
The assembler converts assembly code into an object file.

Command: `gcc -c main.s -o main.o`

Output: `main.o`

### 4. Linking
The linker combines the object file with required libraries to create an executable.

Command: `gcc main.o -o billing`

Output: `billing`

## Types of Errors

| Error Type | Example | Explanation |
|---|---|---|
| Syntax error | Missing semicolon | Compiler reports invalid syntax |
| Undeclared variable | Using `total` without declaring it | Compilation fails |
| Linker error | Missing `main()` function | Linker cannot create the executable |
| Runtime error | Division by zero | Program may crash or behave unpredictably |
| Logical error | Incorrect tariff calculation | Program runs but produces an incorrect bill |

## Expected Program Output

```text
GCC Compilation Demonstration
Units consumed: 175
Rate per unit: Rs. 2.25
Total bill: Rs. 393.75
```

## Result

The program demonstrates a simple electricity charge calculation. The four GCC compilation stages and common programming errors have been documented.

The individual GCC stage commands are provided for reference; their execution has not yet been verified.
