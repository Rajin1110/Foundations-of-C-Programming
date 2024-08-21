#include <stdio.h>
// Fibonacci Series
int f(int);
int f(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }

    return f(n - 1) + f(n - 2);
    // 0 1 1 2 3 5 8 13 21
    //  n+2= n+1 + n
}

int main()
{
    int n = 5;
    printf("The %dth term of Fibonacci series is %d", n, f(n));
    return 0;
}