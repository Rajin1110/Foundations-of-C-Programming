#include <stdio.h>
int main()
{
    int num[3] = {24, 65, 34}; // even int num[] = {24, 65, 34} it works too, can escape writing array length.
    for (int i = 0; i < 3; i++)
    {
        printf("The value of num at location %d is %d\n", i, num[i]);
    }

    return 0;
}