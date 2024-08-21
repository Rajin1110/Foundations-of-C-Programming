#include <stdio.h>
int main()
{
    char i = 'A';
    char *j = &i; // j is a pointer pointing to i. j is a character pointer
    float k = 5.232;
    float *k1 = &k; // k1 is a pointer pointing to k. j is a float pointer
    // address of value operator
    printf("The address of i is %p\n", &i);
    printf("The address of i in integer is %u\n", &i);
    // we can write like this also
    printf("The address of i is %p \n", j);
    printf("The address of i in integer is %u \n", j);

    printf("The address of k is %p\n", &k);
    printf("The address of i in integer is %u\n", &k);
    printf("The address of i is %p \n", k1);
    printf("The address of i in integer is %u \n", k1);

    printf("The value at address j is %c\n", *j);
    printf("The value at address k is %f\n", *k1);
    // * gives address
    return 0;
}