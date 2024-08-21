#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    // structures carries different types of data types.
    struct employee e1, e2;
    e1.code = 4501;
    strcpy(e1.name, "Rajin");
    e1.salary = 50.5;
    printf("%d %s %f\n", e1.code, e1.name, e1.salary);

    return 0;
}