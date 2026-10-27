
#ifndef BILLING_H
#define BILLING_H

#include <stdio.h>

#define FIXED_CHARGE_PAISE 5000
#define SLAB1_LIMIT 100
#define SLAB2_LIMIT 200
#define SLAB2_RATE_PAISE 225
#define SLAB3_RATE_PAISE 450

long long calculate_bill(int units);

#ifdef DEBUG
#define DEBUG_PRINT(value) \
    printf("DEBUG: %s = %lld\n", #value, (long long)(value))
#else
#define DEBUG_PRINT(value) ((void)0)
#endif

#endif
