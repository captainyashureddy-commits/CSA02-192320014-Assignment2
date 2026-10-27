
#include <stdio.h>

#define RATE_PAISE 225

int main(void)
{
    int units = 175;
    long long total_paise =
        (long long)units * RATE_PAISE;

    printf("GCC Compilation Demonstration\n");
    printf("Units consumed: %d\n", units);
    printf("Rate per unit: Rs. 2.25\n");

    printf("Total bill: Rs. %lld.%02lld\n",
           total_paise / 100,
           total_paise % 100);

    return 0;
}
