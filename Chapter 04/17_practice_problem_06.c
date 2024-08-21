#include <stdio.h>
int main()
// PRIME NUMBER CHECKER
{
    int n, np = 1;
    printf("Enter the number.\n=>");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        np = 0;
    }

    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                np = 0;
                break;
            }
        }
    }

    if (np == 1)
    {
        printf("%d is a prime number", n);
    }

    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}