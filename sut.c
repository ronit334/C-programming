#include<stdio.h>
int main()
{
    char s[30];
    int a[30],i,b=0,e;
    printf("enter");
    gets(s);
    for(i=0;i<=s[i]-1;i++)
       {

        a[i]=s[i];

}
for(i=0;i<=a[i];i++)
{
    if(a[i]>=65 && a[i]<=90)
    {
        b=i+1;
        break;
    }
}


if(b!=0)
printf("%d",b);
else
    printf("-1");


        }




