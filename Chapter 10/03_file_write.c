#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("rajin.txt", "a"); // write mode, first clears out the full file.
    int num = 432;
    fprintf(fptr, "%d", num);
    fclose(fptr);

    fptr = fopen("rajin.txt", "r");
    int digit;
    fscanf(fptr, "%d", &digit);
    printf("The new number is %d\n", digit);
    printf("The location of fptr is %u\n", &fptr);
    fclose(fptr);

    return 0;
}