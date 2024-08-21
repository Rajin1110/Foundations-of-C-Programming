#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    printf("%d\n", ptr[0]);

    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    return 0;
}