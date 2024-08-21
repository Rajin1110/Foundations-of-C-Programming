#include <stdio.h>
typedef struct complex
{
    int i;
    int j;
} complex;
void display(complex z)
{
    printf("The value of Complex Number is %d+ %di\n", z.i, z.j);
}

int main()
{
    complex z[5];
    for (int n = 0; n < 5; n++)
    {
        printf("Complex number no %d:\n", n + 1);
        printf("Enter real part\n=>");
        scanf("%d", &z[n].i);
        printf("Enter imaginary part\n=>");
        scanf("%d", &z[n].j);
    }
    for (int m = 0; m < 5; m++)
    {
        display(z[m]);
    }

    return 0;
}