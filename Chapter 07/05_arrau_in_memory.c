
#include <stdio.h>
int main()
{
    int mark[10];

    printf("Enter the marks of  5 students:\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d)", i);
        scanf("%d", &mark[i]);
    }

    for (int i = 1; i <= 5; i++)
    {
        printf("The value of marks at location %u is %d\n", &mark[i], mark[i]);
    }

    return 0;
}