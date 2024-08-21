#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rajin.txt", "r");

    if (ptr == NULL)
    {
        printf("The file does not exist\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
        return 0;
    }

    fclose(ptr); // It's a good practice
}