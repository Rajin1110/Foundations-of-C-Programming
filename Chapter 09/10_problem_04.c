#include <stdio.h>
typedef struct complex
{
    int i;
    int j;
} complex;

int main()
{
    complex z1 = {4, 5};
    printf("The complex number is %d+%di\n", z1.i, z1.j);

    return 0;
}