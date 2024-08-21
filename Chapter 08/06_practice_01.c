#include <stdio.h>
int main()
{
    char str[6];
    scanf("%s", str);
    printf("%s\n", str);
    char str_2[6];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str_2[i]);
        fflush(stdin); // so that enter doesn't count as a new character.
    }
    str_2[5] = '\0';
    printf("%s\n", str);

    return 0;
}
