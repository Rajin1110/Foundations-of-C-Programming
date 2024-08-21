#include <stdio.h>
int main()
{
    int mark[10];
    printf("Enter the marks of first 5 students\n=>");
    scanf("%d", &mark[0]);
    scanf("%d", &mark[1]);
    scanf("%d", &mark[2]);
    scanf("%d", &mark[3]);
    scanf("%d", &mark[4]);

    printf("Enter the marks of last 5 students\n=>");
    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &mark[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of marks at location %d is %d\n", i, mark[i]);
    }

    return 0;
}