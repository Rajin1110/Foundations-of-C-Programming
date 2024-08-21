#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("rajin.txt", "a");
    // char c = fgetc(fptr);
    // printf("%c\n", c);
    fputc('c', fptr);
    return 0;
}