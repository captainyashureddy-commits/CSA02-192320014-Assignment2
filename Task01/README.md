# Task01 — Header Files and Conditional Compilation

## Objective
To develop a modular rural electricity billing program in C using header files, include guards, macros and conditional compilation.

## Files
- `billing.h` — Contains tariff constants, function declaration, include guards and DEBUG macro.
- `main.c` — Implements electricity bill calculation and displays the result.

## Concepts Used
1. Header files using `#include`.
2. Include guards using `#ifndef`, `#define` and `#endif`.
3. Conditional compilation using `#ifdef DEBUG`.
4. Function declarations and modular programming.
5. Integer arithmetic for accurate billing in paise.

## Compilation and Execution

Normal mode:
```bash
gcc main.c -o billing
./billing
```

DEBUG mode:
```bash
gcc -DDEBUG main.c -o billing_debug
./billing_debug
```

## Normal Output
```text
Rural Electricity Billing System
Units consumed: 250
Total bill: Rs. 500.00
```

## DEBUG Output
```text
DEBUG: units = 250
DEBUG: energy_charge = 45000
Rural Electricity Billing System
Units consumed: 250
Total bill: Rs. 500.00
```

## Result
The rural electricity billing program was implemented and tested in normal and DEBUG modes. Include guards prevent repeated header inclusion, while conditional compilation enables diagnostic messages without changing the billing calculation.

**Note:** The tariff values are illustrative constants used in this implementation.
