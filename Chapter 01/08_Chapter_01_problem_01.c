#include<stdio.h>
int main()
{
     int length, breadth;
     printf("Please Enter the Length of the Area \n>");
     scanf("%d", &length);
     printf("Please Enter the Breadth of the Area \n=>");
     scanf("%d", &breadth);
     int area= length*breadth;
     printf("The AREA is %d", area);
     return 0;
}