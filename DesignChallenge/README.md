# Design Challenge — Smart Meter Time-of-Day Billing System

## Objective

To design and implement a smart electricity billing system in C that processes 15-minute energy consumption readings and calculates charges based on time-of-day tariffs.

## Problem Statement

Traditional electricity billing systems calculate charges using total electricity consumption. Smart meters can record electricity consumption at regular intervals, allowing different tariffs to be applied depending on the time of day.

The proposed system processes 15-minute energy readings and calculates the electricity bill using different tariff rates.

## Proposed Solution

The smart meter billing system uses:

1. An array to store 15-minute energy readings.
2. A second array to store the applicable tariff for each interval.
3. A loop to calculate the charge for each interval.
4. Integer arithmetic to calculate monetary values accurately.
5. A fixed charge added to the total energy charge.

## System Flow

Smart Meter Readings → Interval Validation → Tariff Selection → Energy Charge Calculation → Total Bill → Billing Output

## Sample Input

| Interval | Energy (Wh) | Tariff (Rs./kWh) |
|---|---:|---:|
| 1 | 250 | 2.00 |
| 2 | 300 | 2.00 |
| 3 | 275 | 2.00 |
| 4 | 325 | 2.00 |
| 5 | 400 | 4.00 |
| 6 | 350 | 4.00 |
| 7 | 300 | 4.00 |
| 8 | 200 | 4.00 |

## Calculation

Total energy consumed = 2,400 Wh = 2.400 kWh.

Off-peak consumption = 1.150 kWh × Rs. 2.00 = Rs. 2.30.

Peak consumption = 1.250 kWh × Rs. 4.00 = Rs. 5.00.

Total energy charge = Rs. 7.30.

Fixed charge = Rs. 50.00.

**Final electricity bill = Rs. 57.30.**

## Expected Output

```text
Smart Meter Billing System
15-Minute Interval Analysis

Total Energy: 2.400 kWh
Energy Charge: Rs. 7.30
Fixed Charge: Rs. 50.00
Final Bill: Rs. 57.30
```

The program also displays the individual interval readings and tariff rates.

## Advantages

- Supports time-of-day electricity billing.
- Processes 15-minute smart meter readings.
- Uses integer arithmetic for monetary calculations.
- Encourages electricity usage during off-peak periods.
- Provides a foundation for automated electricity billing.

## Limitations and Future Improvements

The current implementation uses eight predefined readings and illustrative tariff rates. It does not yet validate live meter data or automatically determine tariffs from timestamps.

Future improvements may include processing 96 readings per day, reading meter data from files, validating missing readings, identifying peak hours automatically and generating monthly electricity bills.

## Result

A prototype smart meter billing program was developed using C programming. The program calculates interval-based energy charges and produces a total bill of Rs. 57.30 for the sample data.
