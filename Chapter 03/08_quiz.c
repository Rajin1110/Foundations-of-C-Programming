#include <stdio.h>
int main()
{
    printf("Please Enter your exam marks.\n=>");
    float m;
    scanf("%f", &m);
    if (m <= 100)
    {
        if (m > 90)
        {
            printf("Your grade is A");
        }
        else if (m > 80)
        {
            printf("Your grade is B");
        }
        else if (m > 70)
        {
            printf("Your grade is C");
        }
        else if (m > 60)
        {
            printf("Your grade is D");
        }
        else if (m > 50)
        {
            printf("Your grade is E");
        }
        else
        {
            printf("Your grade is F");
        }
    }
    else
    {
        printf("Please enter a valid marks.");
    }
    return 0;
}