#include <stdio.h>
void ten_times(int *a);
void ten_times(int *a)
{
    *a = (*a) * 10;
}
int main()
{
    int a = 7;
    printf("%d\n", a);
    ten_times(&a);
    printf("%d", a);
    return 0;
}