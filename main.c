
#include "billing.h"

long long calculate_bill(int units)
{
    long long energy_charge = 0;

    if (units <= SLAB1_LIMIT)
    {
        energy_charge = 0;
    }
    else if (units <= SLAB2_LIMIT)
    {
        energy_charge =
            (units - SLAB1_LIMIT) * SLAB2_RATE_PAISE;
    }
    else
    {
        energy_charge =
            (SLAB2_LIMIT - SLAB1_LIMIT)
            * SLAB2_RATE_PAISE;

        energy_charge +=
            (units - SLAB2_LIMIT)
            * SLAB3_RATE_PAISE;
    }

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
