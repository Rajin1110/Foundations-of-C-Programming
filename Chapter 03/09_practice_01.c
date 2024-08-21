#include <stdio.h>
int main()
{
    float p;
    printf("Enter your physics marks\n=>");
    scanf("%f", &p);
    float c;
    printf("Enter your chemistry marks\n=>");
    scanf("%f", &c);
    float m;
    printf("Enter your math marks\n=>");
    scanf("%f", &m);

    float avg = (p + c + m) / 3;
    printf("Your average marks is %.2f%%\n", avg);

    if (avg <= 100)
    {
        if (avg >= 40 && p >= 33 && c >= 33 && m >= 33)
        {
            printf("Congrats,You passed");
        }
        else
        {
            printf("You Failed");
        }
    }
    else
    {
        printf("Please enter valid marks!");
    }
    return 0;
}
