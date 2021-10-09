#include<stdio.h>
#include "header.h"
#include"header.c"

//int leapyear(int);


int main()
{
    int year=400,c;
    printf("enter the year \n");
    scanf("%d",&year);
    c=leapyear(year);
    return 0;
}
/*int leapyear(int year)
{
    if(year%4==0 && year%100!=0||year%400==0)// century year should be divisible by 400
        printf("leap year");
   else
        printf("not leap year");
    return 0;
}*/
