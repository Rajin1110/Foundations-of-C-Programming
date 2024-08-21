#include <stdio.h>
// function prototype
int sum(int, int);
// eta main function er age hobe.

// Function defination
int sum(int x, int y)
{
    printf("The sum of %d+%d=%d\n", x, y, x + y);
    return x + y;
}
int main()
{
    // without function
    int a = 1;
    int b = 2;
    int c = a + b;
    printf("The sum is %d\n", c);

    int a1 = 21;
    int b1 = 32;
    int c1 = a1 + b1;
    printf("The sum is %d\n", c1);

    // with function
    sum(a, b);
    sum(a1, b1);
    int a3 = 12, b3 = 33;
    sum(a3, b3);
    sum(4, 9);

    return 0;
}