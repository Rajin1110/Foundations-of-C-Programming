#include <stdio.h>
int main()
{
    /*
    AND operator- &&
    OR operator- ||
    NOT operator- !
    */
    int a = 1, b = 1;
    printf("The value of a AND b is %d\n", a && b);
    printf("The value of a OR b is %d\n", a || b);
    printf("The value of not(a) is %d\n", !a);
    if (a && b)
    {
        printf("Both are true\n");
    }
    //  is same as this-
    if (a)
    {
        if (b)
        {
            printf("Both are true\n");
        }
    }
    // egula re bole nested if
    return 0;
}