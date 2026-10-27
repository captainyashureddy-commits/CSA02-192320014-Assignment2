
#include <stdio.h>

#define FIXED_CHARGE_PAISE 5000
#define SLAB1_LIMIT 100
#define SLAB2_LIMIT 200
#define SLAB2_RATE_PAISE 225
#define SLAB3_RATE_PAISE 450

int main(void)
{
    int units;
    long long energy_charge = 0;
    long long total_bill;

    printf("Rural Electricity Billing System\n");
    printf("Enter units consumed: ");

    if (scanf("%d", &units) != 1)
    {
        printf("Error: Invalid input. Enter a whole number.\n");
        return 1;
    }

    if (units < 0)
    {
        printf("Error: Units cannot be negative.\n");
        return 1;
    }

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
            (long long)(units - SLAB2_LIMIT)
            * SLAB3_RATE_PAISE;
    }

    total_bill = FIXED_CHARGE_PAISE + energy_charge;

    printf("\nElectricity Bill\n");
    printf("Units Consumed : %d\n", units);
    printf("Energy Charge  : Rs. %lld.%02lld\n",
           energy_charge / 100, energy_charge % 100);
    printf("Fixed Charge   : Rs. 50.00\n");
    printf("Total Bill     : Rs. %lld.%02lld\n",
           total_bill / 100, total_bill % 100);

    return 0;
}
