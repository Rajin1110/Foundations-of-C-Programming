#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("rajin.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
    fclose(ptr); // It's a good practice
    return 0;
}