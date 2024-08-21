#include <stdio.h>
void Good_morning();
void Good_afternoon();
void Good_evening();

void Good_morning()
{
    printf("Good Morning\n");
}
void Good_afternoon()
{
    printf("Good Afternoon\n");
}
void Good_evening()
{
    printf("Good Evening\n");
}

int main()
{
    Good_morning();
    Good_afternoon();
    Good_evening();
    return 0;
}