#include <stdio.h>
void swap(int a, int b) // call by value
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap_real(int *m, int *n) // call by reference
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}
int main()
{
    int a = 4, b = 6;
    swap(a, b);
    printf("Value of a is %d and value of b is %d\n", a, b); // doesn't work, because of its a call by value
    int m = 2, n = 3;
    swap_real(&m, &n);
    printf("Value of m is %d and value of n is %d\n", m, n); // doesn't work, because of its a call by value
    return 0;
}