#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character\n=>");
    scanf("%c", &ch);
    printf("The ANSII value of character '%c' is %d\n", ch, ch);
    // 97,22
    if (ch >= 97 && ch <= 122)
    {
        printf("The character '%c' is lowercase", ch);
    }
    else
    {
        printf("The character '%c' is not lowercase", ch);
    }
    return 0;
}