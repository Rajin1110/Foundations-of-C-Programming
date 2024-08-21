#include <stdio.h>

int factorial(int);
int factorial(int a)
{
    if (a == 0 || a == 1) // base condition
    {
        return 1;
    }

    // (n-1)!=(n-1)x(n-2)X.......x4x3x2x1
    return factorial(a - 1) * a;
}

int main()
{
    int a = 4;
    printf("The factorial of %d is %d", a, factorial(a));
    return 0;
}