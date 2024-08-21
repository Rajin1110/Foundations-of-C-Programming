#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("rajin.txt", "r");
    char ch;
    for (int i;; i++)
    {
        ch = fgetc(fptr);
        printf("%c", ch);

        if (ch == EOF)
        {
            break;
        }
    }

    return 0;
}