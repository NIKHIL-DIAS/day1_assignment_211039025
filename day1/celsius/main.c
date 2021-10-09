// Program to convert celsius to Farenheit and vice-versa

#include <stdio.h>
#include <stdlib.h>
float degree(float);
float degrees(float);
int main()
{
    float cel,farenheit=100;
    cel=degree(farenheit);
    printf("%f farenheit is %f celsius\n",farenheit,cel);
    farenheit=degrees(cel);
    printf("%f celsius is %f farenheit\n",cel,farenheit);

    return 0;
}
float degree(float farenheit)
{
    float a;
    a=(farenheit-32)/1.8;//  formula to covert farenheit to celsius
    return a;
}
float degrees(float cel)
{
    float b;
    b=(cel*1.8)+32;// to convert from celsius to Farenheit
    return b;
}
