#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char ch[100];
    int i;
    printf("enter a string\n");
    scanf("%s",ch);
    //gets(ch);
    for(i=0;ch[i]!= '\0';i++)
    {
        if(ch[i] >= 'A' && ch[i]<='Z'){
            ch[i]=ch[i]+32;
        }
    }

    printf("lowercase=%s",ch);
    return 0;
}
