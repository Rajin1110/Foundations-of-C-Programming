#include <stdio.h>
typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
} date;
int compare(date day1, date day2)
{
    if (day1.yyyy > day2.yyyy)
    {
        return 5;
    }
    else if (day1.yyyy == day2.yyyy)
    {
        if (day1.mm > day2.mm)
        {
            return 5;
        }
        else if (day1.mm == day2.mm)
        {
            if (day1.mm > day2.mm)
            {
                return 5;
            }
            else if (day1.mm == day2.mm)
            {
                if (day1.dd > day2.dd)
                {
                    return 5;
                }
                else if (day1.dd == day2.dd)
                {
                    return 0;
                }
                else
                {
                    return -5;
                }
            }
            else
            {
                return -5;
            }
        }
        else
        {
            return -5;
        }
    }
    else
    {
        return -5;
    }
}
int main()
{
    date day1, day2;
    printf("Enter date 1 (dd mm yyyy):\n");
    scanf("%d %d %d", &day1.dd, &day1.mm, &day1.yyyy);

    printf("Enter date 2 (dd mm yyyy):\n");
    scanf("%d %d %d", &day2.dd, &day2.mm, &day2.yyyy);

    int result = compare(day1, day2);
    if (result == 5)
    {
        printf("Day 2 comes first\n");
    }
    else if (result == -5)
    {
        printf("Day 2 comes last\n");
    }
    else if (result == 0)
    {
        printf("Both are same day\n");
    }

    printf("\n");

    return 0;
}