#include<stdio.h>
int main()
{
    int a[25],v[25],b=0,e=0,c=0,i,j,t,l=0;
    char s[25];
    printf("");
    gets(s);
    for(i=0;i<=s[i];i++)
    {
        a[i]=s[i];
        b=b+1;
    }
    for(i=0;i<b;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {l=1;
            a[i]=a[i]+32;
            v[e]=a[i];
            e++;
            c=c+1;
        }
    }
    for(j=1;j<=b;j++)
    {
        for(i=0;i<b;i++)
        {
            if(a[i]>=a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
if(l==1)
    {for(i=0;i<c;i++)
    {
        for(j=0;j<b;j++)
        {   if(v[i]==a[j])
            {a[j]=a[j]-32;
            break;}
        }
    }}

    for(i=0;i<b;i++)
    {
        s[i]=a[i];
    }
   for(i=0;i<b;i++)
    {printf("%c",s[i]);}}


