#include <stdio.h>
float avg(float, float, float);
float avg(float a, float b, float c)
{
    return ((a + b + c) / 3);
}

int main()
{
    float a = 6, b = 8, c = 10;
    printf("average=%.2f", avg(a, b, c));
    return 0;
}