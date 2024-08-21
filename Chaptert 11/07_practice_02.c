#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d\n=>", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of no %d is %d\n", i + 1, ptr[i]);
    }
    // REALLOCATING TO TEN
    n = 10;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    printf("AFTER REALLOCATING:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value no %d\n=>", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of no %d is %d\n", i + 1, ptr[i]);
    }
    return 0;
}