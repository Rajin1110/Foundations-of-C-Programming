#include <stdio.h>
int main()
{
    int a = 6;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", ptr);
    ptr++; // it increases by the value of its type . like four for int, one for char.
    printf("The value of ptr is %u\n", ptr);
    return 0;
}