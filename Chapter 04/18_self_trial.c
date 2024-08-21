#include <stdio.h>
int main()
// getting the prime numbers
{
    int max, prime;
    printf("Enter the max range.\n=>");
    scanf("%d", &max);
    printf("The prime numbers are:\n");
    for (int num = max; num > 1; num--)
    {

        prime = 1;
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
            }
        }
        if (prime == 1)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}