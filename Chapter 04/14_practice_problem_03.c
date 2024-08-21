#include <stdio.h>
int main()
{
    int s = 0, i = 1, l, m;
    printf("Enter the number.\n=>");
    scanf("%d", &l);
    printf("Summation:\n");
    while (i <= 10)
    {
        m = l * i;
        s += m; // s = s + m;
        printf("%d", m);
        i++;
        if (i <= 10)
        {
            printf("+");
        }
    }
    printf("=%d", s);
    return 0;
}