#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);

    // int arr[n]; not applicable in c
    // four function: malloc,calloc,free,realloc.
    ptr = (int *)malloc(n * sizeof(int));
    ptr[0] = 3;
    ptr[1] = 6;
    printf("%d\n", ptr[0]);

    return 0;
}