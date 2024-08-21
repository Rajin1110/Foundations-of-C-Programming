#include <stdio.h>
int main()
{
    int a = 3;
    int b = 6;
    int c = 9;
    printf("The value is %d", a * b / c + 7);
    // 3*6/c+7
    // 18/9+7
    // 2+7
    // 9
    printf("\nThe val    ue is %d", 3 * b / 2 * c + 7 * a);
    // 3*6/2*c+7*a
    // 182*C+7*a
    // 9*9+7*3
    // 81+21
    // 102
    return 0;
}