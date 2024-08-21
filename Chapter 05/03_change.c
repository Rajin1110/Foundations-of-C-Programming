#include <stdio.h>
int change(int);
int change(int a)
{
    a = 77; // misnomer
    return 0;
}
int main()
{
    int b = 22;
    change(b); // b doesn't change; it's still 77
    printf("%d", b);
    return 0;
}