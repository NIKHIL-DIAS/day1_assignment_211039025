#include<stdio.h>
#include<math.h>
/*float power(float,float);
int main()
{
  float base,exp,val;
  printf("enter base\n");
  scanf("%f",&base);
  printf("enter exp\n");
  scanf("%f",&exp);
  val=power(base,exp);

  printf("%f^%f=%f",base,exp,val);
  }
float power(float ba,float ex)
{
    float value;
    value=pow(ba,ex);
    return value;
}*/
int main()
{
    int N;
    scanf("%d",&N);
    for(int shift=0;shift<N;shift++)
    {
        printf("%d ",1<<shift);
    }
}
