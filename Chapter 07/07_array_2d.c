#include <stdio.h>
int main()
{
    int r, c;
    printf("Input the row numbers of the array\n=>");
    scanf("%d", &r);
    printf("Input the column numbers of the array\n=>");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Input the value of %d no row %d no column\n=>", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}