#include <stdio.h>
int sum(int, int);
int sum(int a, int b)
{
    // a=6; in this process value of a doesn't change.because here a is the copy of a, not real a.
    a = 6; // but here is changes, cz it changes at the location.
    return (a + b);
}
int main()
{
    int x = 4, y = 7;
    printf("The sum of x(%d) and y(%d) is %d\n", x, y, sum(x, y));
    printf("The value of x is %d", x);
    return 0;
}