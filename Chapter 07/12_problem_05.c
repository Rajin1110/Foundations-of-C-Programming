#include <stdio.h>
int main()
{
    int array[3][10];
    int mul[] = {3, 7, 9};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of array[i][j] is %d\n", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}