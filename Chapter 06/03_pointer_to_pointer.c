#include <stdio.h>
int main()
{
    int i = 6;
    int *j = &i;
    int **k = &j;
    //  6/6 jemon katakati hoy , *& temon katakati hoy

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *&i);
    printf("The value of i is %d\n", *j); // etake *&(*j) emon o likha jay,
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The address of pointer j is %p\n", &j);
    printf("The address of pointer j is %p\n", k);

    printf("The value at pointer j is %d\n", *j);
    printf("The value at pointer k is %p\n", *k);
    printf("The value at pointer j is %d\n", **k); // k er vitre j, j er vitre i, so direct i ber korlo.

    return 0;
}