#include <stdio.h>
int main()
{
    int i = 0;
    char st[] = "Rajin";
    do
    {
        i++;
    } while (st[i] != '\0');
    printf("The length of the string is %d\n", i);

    return 0;
}