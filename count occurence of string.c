#include<stdio.h>
int main()
{
    int i,a[25],b=0,c;
    char s[25];
    char e;
    printf("enter");
    scanf("%s",s);
   fflush(stdin);
    printf("enter occurence");
    scanf("%c",&e);
    for(i=0;i<=s[i];i++)
    {a[i]=s[i];}
    c=e;
    for(i=0;i<=s[i];i++)
        {if(c==a[i])
    {
        b=b+1;
    }
    else if(c==a[i]+32){
            b=b+1;
    }
    else if(c==a[i]-32){
        b=b+1;
    }}
    printf("%c=%d",e,b);

}
