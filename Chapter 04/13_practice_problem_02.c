#include <stdio.h>
int main()
{
    int s = 0, i = 1, l;
    printf("Enter the number.\n=>");
    scanf("%d", &l);
    printf("Summation:\n");
    while (i <= l)
    {
        s += i; // s = s + i;
        printf("%d", i);
        i++;
        if (i <= l)
        {
            printf("+");
        }
    }
    printf("=%d", s);
    return 0;
}