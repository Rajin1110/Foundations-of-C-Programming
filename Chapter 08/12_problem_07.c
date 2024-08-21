#include <stdio.h>
#include <string.h>
int main()
{
    char x = 'i';
    char str[] = "Rajin";
    int count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == x)
        {
            count++;
        }
    }
    printf("The string (%s) has letter '%c' %d times\n", str, x, count);

    return 0;
}