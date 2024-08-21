#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    printf("Enter the size of the array\n=>", i + 1);
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 45;
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