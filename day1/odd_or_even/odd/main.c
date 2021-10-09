#include <stdio.h>
#include <stdlib.h>
int no(int);

int main()
{
    int a=5;
    no(a);// fn call

    return 0;
}
int no(int a)
{
   if(a%2==0)
        printf("%d is even\n",a);
    else
        printf("%d is odd\n",a);
}

