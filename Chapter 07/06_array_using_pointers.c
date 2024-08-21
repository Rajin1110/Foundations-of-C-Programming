#include <stdio.h>
int main()
{
    int marks[] = {12, 34, 54, 66};
    // int *ptr = &marks[0]; it works as normal code.
    int *ptr = marks; // even it works same too. OMG!
    for (int i = 0; i < 4; i++)
    {
        printf("Marks at index %d is %d\n", i, marks[i]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Marks at index %d is %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}