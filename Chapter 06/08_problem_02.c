#include <stdio.h>
int printing_65(int *b)
{
    printf("The value at b is %d\n", *b);
    printf("The value of b is %p\n", b);
    return 65;
}
int main()
{
    int a = 65;
    int *b = &a;
    printf("The value of the address of %d is %p\n", a, b);
    printf("The value at address %p is %d\n", b, *b);
    printing_65(b);
    return 0;
}