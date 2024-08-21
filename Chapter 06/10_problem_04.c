#include <stdio.h>
float sum(float *a, float *b)
{
    return (*a) + (*b);
}
float avg(float *a, float *b)
{
    return ((*a) + (*b)) / 2;
}
float main()
{
    float a = 4, b = 8;
    int c = sum(&a, &b);
    int d = avg(&a, &b);
    printf("Sum=%.2f\n", sum(&a, &b));
    printf("Avg=%.2f\n", avg(&a, &b));
    printf("Address of Sum=%u\n", &c);
    printf("Address of Avg=%u\n", &d);

    return 0;
}