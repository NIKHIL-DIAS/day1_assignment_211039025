#include "header.h"
#include<stdio.h>
int leapyear(int year)
{
    if(year%4==0 && year%100!=0||year%400==0)// century year should be divisible by 400
        printf("leap year");
   else
        printf("not leap year");
    return 0;
}

