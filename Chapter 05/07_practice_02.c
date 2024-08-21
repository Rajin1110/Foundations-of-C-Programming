#include <stdio.h>
// temperature uni converter
float converter(float c);
float converter(float c)
{
    return (c * (9.00 / 5.00)) + 32.00;
}
int main()
{
    float c = 100.00;
    printf("%.2f degree celsius is %.2f degree fahrenheit", c, converter(c));
    return 0;
}