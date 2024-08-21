#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number.\n=>");
    scanf("%d", &n);
    printf("The multiplication table is:\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    // Reverse Order
    printf("The reverse multiplication table is:\n");
    for (int i = 10; i >= 1; i--)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}