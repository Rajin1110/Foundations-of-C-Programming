#include <stdio.h>
int main()
{
    int i = 72;
    int *j = &i; // j i s a pointer pointing to i. j is a integer pointer

    // address of value operator
    printf("The address of i is %p \n", &i);
    printf("The address of i in integer is %u \n", &i);
    // we can write like this also
    printf("The address of i is %p \n", j);
    printf("The address of i in integer is %u \n", j);
    int k = 67;
    printf("The address of k is %p \n", &k);

    printf("The value at address j is %d\n", *j);
    printf("The value at address j is %d\n", *&i);
    // * gives address
    return 0;
}