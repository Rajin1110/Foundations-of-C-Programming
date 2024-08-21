#include <stdio.h>
int main()
{
    int a = 65;
    int *b = &a;
    printf("The value of the address of %d is %p\n", a, b);
    printf("The value at address %p is %d\n", b, *b);
    return 0;
}