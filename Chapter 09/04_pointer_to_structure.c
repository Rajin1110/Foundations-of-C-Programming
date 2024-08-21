#include <stdio.h>
#include <string.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
};
int main()
{
    struct employee e1;
    e1.code = 55;
    struct employee *ptr;
    ptr = &e1;
    printf("%u\n", (*ptr).code);
    printf("%u\n", ptr->code);

    return 0;
}