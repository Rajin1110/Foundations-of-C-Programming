#include <stdio.h>

int main()
{
    FILE *fptr;
    char name1[34], name2[34];
    int salary1, salary2;
    fptr = fopen("salary.txt", "w");

    printf("Enter the name of first employee.\n");
    scanf("%s", name1);
    printf("Enter the salary of first employee.\n");
    scanf("%d", &salary1);
    printf("Enter the name of second employee.\n");
    scanf("%s", name2);
    printf("Enter the salary of of second employee.\n");
    scanf("%d", &salary2);

    fprintf(fptr, "%s, %d \n", name1, salary1);
    fprintf(fptr, "%s, %d \n", name2, salary2);

    fclose(fptr);
    return 0;
}