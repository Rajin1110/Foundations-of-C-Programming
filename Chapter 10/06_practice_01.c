#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("file.txt", "r");
    int num[3];
    fscanf(ptr, "%d %d %d", &num[0], &num[1], &num[2]);
    printf("The values of num are %d %d %d\n", num[0], num[1], num[2]);
    fclose(ptr); // It's a good practice
    return 0;
}