#include <stdio.h>
typedef struct vector
{
    int salary;
    float score;
} Employee;
int main()
{
    Employee e1;
    Employee *ptr = &e1;
    // (*ptr1).salary=54;
    // (*ptr).score=45.3;
    ptr->salary = 54;
    ptr->score = 45.3;
    printf("Value of salary is %d and score is %.2f\n", ptr->salary, ptr->score);

    return 0;
}