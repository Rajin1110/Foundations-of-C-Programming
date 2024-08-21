#include <stdio.h>
int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);
    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    // ++i;
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);
    // i++;
    printf("The value of i is %d\n", ++i);
    printf("The value of i is %d\n", i);
    /*
    So, i++ means first print the increase. (Post increment operetaor)
    But, ++i means first print then increase.(Pre increment operation)
    */

    i += 2; // same as i=i+2
    printf("The value of i is %d\n", i);
    return 0;
}