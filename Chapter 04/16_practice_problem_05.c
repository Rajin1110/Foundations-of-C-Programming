#include <stdio.h>
int main()
/*
    FACTORIAL CODE
*/
{
    int m = 1, l;
    printf("Enter the number.\n=>");
    scanf("%d", &l);
    printf("%d!=", l);
    for (l; l > 0; l--)
    {
        m = m * l;
        printf("%d", l);

        if (l > 1)
        {
            printf("x");
        }
    }

    printf("=%d", m);

    return 0;
}