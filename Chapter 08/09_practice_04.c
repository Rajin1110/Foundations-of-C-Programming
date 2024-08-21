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
void mystrcpy(char str[], char copied[])
{
    int i = 0;
    for (; i < string_length(str); i++)
    {
        copied[i] = str[i];
    }
    copied[i] = '\0';
}
int main()
{
    char str[] = "rajin_vai";
    char copied[100];
    mystrcpy(str, copied);
    printf("%s\n", copied);
    return 0;
}