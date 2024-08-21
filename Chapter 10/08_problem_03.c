#include <stdio.h>
int main()
{
    FILE *fptr;
    FILE *fptr_2;
    fptr = fopen("rajin.txt", "r");
    fptr_2 = fopen("rajin2.txt", "a");
    char ch;
    for (int i;; i++)
    {
        ch = fgetc(fptr);
        if (ch == EOF)
        {
            break;
        }
        fprintf(fptr_2, "%c", ch);
    }

    fclose(fptr);
    fclose(fptr_2);
    return 0;
}