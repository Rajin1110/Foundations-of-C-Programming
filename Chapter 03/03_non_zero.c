#include <stdio.h>
int main()
{
    if (5)
    {
        printf("This can print 1\n");
    }
    if (1232.323)
    {
        printf("This can print 2\n");
    }
    if ('c')
    {
        printf("This can print 3\n");
    }
    if (0)
    {
        printf("This can't print\n");
    }
    // all non zero value(even characterts) indicates true. zero indicates false.
    return 0;
}