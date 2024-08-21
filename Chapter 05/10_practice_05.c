#include <stdio.h>
int sum(int);
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    return n + sum(n - 1);
}
int main()
{
    int n = 5;
    printf("The sum of %dth natural number is %d", n, sum(n));
    return 0;
}