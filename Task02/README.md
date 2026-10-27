# Task02 — Input Validation and Formatted Output

## Objective

To develop a C program for rural electricity billing using `scanf()` and `printf()`, with input validation and accurate rupees-and-paise formatting.

## Concepts Used

1. Reading user input using `scanf()`.
2. Checking the return value of `scanf()`.
3. Rejecting negative electricity consumption.
4. Calculating electricity charges using tariff slabs.
5. Displaying amounts in rupees and paise using integer arithmetic.

## Algorithm

1. Start the program.
2. Read the number of electricity units.
3. Check whether the input is a valid integer.
4. Reject negative values.
5. Calculate energy charges based on the tariff slabs.
6. Add the fixed charge.
7. Display the electricity bill.
8. Stop the program.

## Test Cases

| Test | Input | Expected Result |
|---|---|---|
| Valid input | 250 | Total bill: Rs. 500.00 |
| Negative input | -50 | Error: Units cannot be negative |
| Invalid text | abc | Error: Invalid input |
| Zero consumption | 0 | Total bill: Rs. 50.00 |
| Slab boundary | 200 | Total bill: Rs. 275.00 |

## Sample Output

```text
Rural Electricity Billing System
Enter units consumed: 250

Electricity Bill
Units Consumed : 250
Energy Charge  : Rs. 450.00
Fixed Charge   : Rs. 50.00
Total Bill     : Rs. 500.00
```

## Result

The C program implements electricity bill calculation with basic input validation and formatted output. It rejects negative values and inputs that cannot be read as integers, and displays monetary values using two decimal places.

The tariff rates are illustrative values used for this assignment.
