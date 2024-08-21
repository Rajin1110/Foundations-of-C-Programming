#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 10, num = 7;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        ptr[i] = (i + 1) * num;
        printf(" %d x %d = %d\n", num, i + 1, ptr[i]);
    }
    // REALLOCATING TO FIFTEEN
    n = 15;
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    printf("\nAFTER REALLOCATING:\n\n");
    for (int i = 0; i < n; i++)
    {
        ptr[i] = (i + 1) * num;
        printf(" %d x %d = %d\n", num, i + 1, ptr[i]);
    }
    return 0;
}