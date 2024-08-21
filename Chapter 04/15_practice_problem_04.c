#include <stdio.h>
int main()
{
    int s = 0, i, l;
    printf("Enter the number.\n=>");
    scanf("%d", &l);
    printf("Summation:\n");
    for (i = 1; i <= 10; i++)
    {
        s += l * i; // s = s + (l * i);
        printf("%d", l * i);

        if (i <= 10)
        {
            printf("+");
        }
    }
    printf("=%d", s);
    return 0;
}