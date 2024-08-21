#include <stdio.h>
struct vector
{
    int i;
    int j;
};

int main()
{
    struct vector v;
    v.i = 1;
    v.j = 2;
    printf("The value of vector v is %di+%dj\n", v.i, v.j);

    return 0;
}