#include <stdio.h>
int main()
{
    int n = 5, table[10];
    for (int i = 0; i < 10; i++)
    {
        table[i] = n * (i + 1);
        printf("%d x %d = %d\n", n, (i + 1), table[i]);
    }

    return 0;
}