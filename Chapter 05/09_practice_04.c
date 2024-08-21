#include <stdio.h>
int main()
// Check OUTPUT
{
    int a = 4;
    printf("%d %d %d\n", a, ++a, a++);
    // OUTPUT 6,6,4
    // Expectation 4,5,5
    // As evaluation order of the compiler is not fixed,
    // so both are correct but output wil be 664
    int b = 9;
    printf("%d %d %d\n", b++, ++b, b);
    return 0;
}