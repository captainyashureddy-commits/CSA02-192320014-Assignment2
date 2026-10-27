# Task03 — Type Conversion, Integer Division and Rounding

## Objective

To demonstrate integer arithmetic, explicit type conversion, integer division and floating-point rounding in a C-based electricity billing calculation.

## Concepts Used

1. Integer division using `/`.
2. Remainder calculation using `%`.
3. Explicit type casting using `(double)`.
4. Floating-point calculations using `double`.
5. Rounding to the nearest integer using `round()`.
6. Representing money in rupees and paise.

## Program Description

The program calculates the electricity charge for 175 units at a demonstration rate of Rs. 2.25 per unit.

Two approaches are compared:

- **Integer arithmetic:** Calculate the total directly in paise to avoid floating-point representation errors.
- **Floating-point arithmetic:** Convert the rate to rupees, calculate the bill and round the result to the nearest paise.

The program also demonstrates how integer division differs from floating-point division.

## Calculation

Units consumed = 175

Rate per unit = Rs. 2.25

Total bill = 175 × 2.25 = **Rs. 393.75**

Total in paise = 175 × 225 = **39,375 paise**

## Expected Output

```text
Electricity Billing - Type Conversion
Units consumed: 175
Rate per unit: Rs. 2.25

Integer Arithmetic:
Total: Rs. 393.75

Floating Point Arithmetic:
Bill before rounding: Rs. 393.7500
Rounded bill: Rs. 393.75

Integer Division Example:
225 / 100 = 2
225.0 / 100 = 2.25
```

## Observations

Integer division discards the fractional portion, so `225 / 100` produces `2`. Floating-point division retains the fractional part and produces `2.25`.

Storing money as integer paise is generally preferable for billing because it avoids binary floating-point precision issues. Floating-point calculations require appropriate rounding before converting to the smallest currency unit.

## Result

The C program demonstrates type conversion, integer division and rounding. The calculated charge of Rs. 393.75 is consistent across both methods for the given input.

**Note:** This is a flat-rate arithmetic demonstration, not the complete slab-based tariff calculation used in Task01 and Task02.
