#include<stdio.h>
int main()
{
    int a,b=-1,c=1,d=0,i,j,l;
    printf("enter");
    scanf("%d",&a);
    l=a+1;
    for(j=1;j<=a;j++)
    {
    l--;

    for(i=1;i<=l;i++)
    {
       d=b+c;
       b=c;
       c=d;

    }
    printf("%d",d);
    }
}
