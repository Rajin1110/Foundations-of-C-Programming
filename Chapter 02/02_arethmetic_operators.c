#include<stdio.h>
int main()
{
    int a=10, b=7,c;
    c=a+b;
    printf("%d+%d=%d \n", a,b,c);
    //Modulus operator is used to get the remainder. Modulus operator is %
    printf("The remainder when a is divided by b is %d", a%b);
    // This does not work for exponentiation in c language
    //  int d= a^b; nothing happens
    return 0;
}