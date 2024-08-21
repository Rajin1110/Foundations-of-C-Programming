#include <stdio.h>
int main()
{
    char st[5];
    // for (int i = 0; i < 5; i++){
    //     printf("%c", st[i]);
    // } we can bypass it by using %s format specifier
    scanf("%s", st); // we don't need to use &st
    // multi words hole it doesn't work
    printf("%s\n", st);

    return 0;
}