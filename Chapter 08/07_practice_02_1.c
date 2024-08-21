#include <stdio.h>

int string_length(char st[])
{
    int i = 0;
    do
    {
        i++;
    } while (st[i] != '\0');
    return i;
}
int main()
{
    char st[] = "Rajinsssss";
    printf("The length of the string is %d\n", string_length(st));
    return 0;
}