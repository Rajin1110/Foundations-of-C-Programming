#include <stdio.h>
// reversing array
void reverse(int *m, int *n)
{
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}
int main()
{
    int d, m, n;
    printf("Enter the dimension of the array\n=>");
    scanf("%d", &d);
    int array[d];
    for (int i = 0; i < d; i++)
    {
        printf("Input the value of %d no element of the array\n=>", i + 1);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < d; i++)
    {
        printf("The REAL value of %d no element of the array is %d\n", (i + 1), array[i]);
    }
    printf("\n\n");

    for (int j = 0; j < (d / 2); j++)
    {
        reverse(&array[j], &array[d - j - 1]);
    }

    for (int i = 0; i < d; i++)
    {
        printf("The REVERSED value of %d no element of the array is %d\n", (i + 1), array[i]);
    }
    return 0;
}