
#include <stdio.h>

#define FIXED_CHARGE_PAISE 5000
#define SLAB1_LIMIT 100
#define SLAB2_LIMIT 200
#define SLAB2_RATE_PAISE 225
#define SLAB3_RATE_PAISE 450

#ifdef DEBUG
#define DEBUG_PRINT(value) \
    printf("DEBUG: %s = %lld\n", #value, (long long)(value))
#else
#define DEBUG_PRINT(value) ((void)0)
#endif

long long calculate_bill(int units)
{
    long long energy_charge = 0;

    if (units <= SLAB1_LIMIT)
        energy_charge = 0;
    else if (units <= SLAB2_LIMIT)
        energy_charge =
            (units - SLAB1_LIMIT) * SLAB2_RATE_PAISE;
    else
        energy_charge =
            (100 * SLAB2_RATE_PAISE) +
            (units - SLAB2_LIMIT) * SLAB3_RATE_PAISE;

    DEBUG_PRINT(units);
    DEBUG_PRINT(energy_charge);

    return FIXED_CHARGE_PAISE + energy_charge;
}

int main(void)
{
    int units = 250;
    long long bill = calculate_bill(units);

    printf("Rural Electricity Billing System\n");
    printf("Units consumed: %d\n", units);
    printf("Total bill: Rs. %lld.%02lld\n",
           bill / 100, bill % 100);

    return 0;
}
