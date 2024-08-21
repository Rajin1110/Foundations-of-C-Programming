#include <stdio.h>
int main() // INCOME TAX
{
    float i, t;
    // i=income t=tax
    printf("Enter your income ammount in bdt.\n=>");
    scanf("%f", &i);

    if (i < 250000)
    {
        printf("Your income tax is Zero Bdt");
    }
    else if (250000 <= i <= 500000)
    {
        t = (i - 250000) * .05;
        printf("Your income tax is %.2f Bdt", t);
    }
    else if (500000 < i <= 1000000)
    {
        t = (i - 500000) * .2 + 250000 * .05;
        printf("Your income tax is %.2f Bdt", t);
    }
    else if (i < 1000000)
    {
        t = (i - 100000) * .3 + 500000 * .02 + 250000 * .05;
        printf("Your income tax is %.2f Bdt", t);
    }

    return 0;
}