#include <stdio.h>
int count(int a[], int s);
int main()
{
    int d;
    printf("Enter the dimension of the array\n=>");
    scanf("%d", &d);
    int array[d];
    for (int i = 0; i < d; i++)
    {
        printf("Input the value of %d no element of the array\n=>", i + 1);
        scanf("%d", &array[i]);
    }
    printf("The number of positive integer in the array is %d", count(array, d));
    return 0;
}
int count(int array[], int d)
{
    int no_of_positive_integers = 0;
    for (int i = 0; i < d; i++)
    {
        if (array[i] > 0)
        {
            no_of_positive_integers++;
        }
    }
    return no_of_positive_integers;
}