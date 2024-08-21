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
    char str[] = "BUET CDI";
    for (int i = 0; i < string_length(str); i++)
    {
        str[i] = str[i] + 1;
    }
    printf("%s\n", str);

    return 0;
}