#include <stdio.h>
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &array[0];
    printf("The value at 1st and 3rd position are %d and %d", *ptr, *(ptr + 2));
    return 0;
}