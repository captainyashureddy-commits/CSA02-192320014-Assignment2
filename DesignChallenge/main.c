
#include <stdio.h>

#define INTERVALS 8
#define FIXED_CHARGE_PAISE 5000

int main(void)
{
    int readings[INTERVALS] = {
        250, 300, 275, 325,
        400, 350, 300, 200
    };

    int rate_paise[INTERVALS] = {
        200, 200, 200, 200,
        400, 400, 400, 400
    };

    long long total_cost = 0;
    long long total_energy = 0;

    printf("Smart Meter Billing System\n");
    printf("15-Minute Interval Analysis\n\n");

    for (int i = 0; i < INTERVALS; i++)
    {
        long long cost =
            (long long)readings[i] * rate_paise[i];

        total_cost += cost;
        total_energy += readings[i];

        printf("Interval %d: %d Wh, Rate Rs. %d.%02d/kWh\n",
               i + 1,
               readings[i],
               rate_paise[i] / 100,
               rate_paise[i] % 100);
    }

    /* Wh * paise/kWh, rounded to nearest paise */
    long long energy_charge = (total_cost + 500) / 1000;
    long long final_bill =
        energy_charge + FIXED_CHARGE_PAISE;

    printf("\nTotal Energy: %.3f kWh\n",
           total_energy / 1000.0);

    printf("Energy Charge: Rs. %lld.%02lld\n",
           energy_charge / 100,
           energy_charge % 100);

    printf("Fixed Charge: Rs. 50.00\n");

    printf("Final Bill: Rs. %lld.%02lld\n",
           final_bill / 100,
           final_bill % 100);

    return 0;
}
