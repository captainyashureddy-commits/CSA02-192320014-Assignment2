
#include <stdio.h>
#include <math.h>

int main(void)
{
    int units = 175;
    int rate_paise = 225;

    int total_paise = units * rate_paise;

    int rupees = total_paise / 100;
    int paise = total_paise % 100;

    double rate_rupees = (double)rate_paise / 100.0;
    double bill_rupees = units * rate_rupees;

    long long rounded_paise =
        (long long)round(bill_rupees * 100.0);

    printf("Electricity Billing - Type Conversion\n");

    printf("Units consumed: %d\n", units);
    printf("Rate per unit: Rs. %.2f\n", rate_rupees);

    printf("\nInteger Arithmetic:\n");
    printf("Total: Rs. %d.%02d\n", rupees, paise);

    printf("\nFloating Point Arithmetic:\n");
    printf("Bill before rounding: Rs. %.4f\n",
           bill_rupees);

    printf("Rounded bill: Rs. %lld.%02lld\n",
           rounded_paise / 100,
           rounded_paise % 100);

    printf("\nInteger Division Example:\n");
    printf("225 / 100 = %d\n", 225 / 100);
    printf("225.0 / 100 = %.2f\n", 225.0 / 100);

    return 0;
}
