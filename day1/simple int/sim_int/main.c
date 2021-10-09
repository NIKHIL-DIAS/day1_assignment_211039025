#include <stdio.h>
#include <stdlib.h>
int simple(int,float,int);

int main()
{
    int p,t;
    float si,r;
    printf("enter Principle,roi,time\n");
    scanf("%d%f%d",&p,&r,&t);
    si=simple(p,t,r);
    printf("simple intrest=%f",si);
    return 0;
}
int simple(int pr,float ra,int ti)
{
   int sim;
   sim=(pr*ti*ra)/100;
   return sim;
}
