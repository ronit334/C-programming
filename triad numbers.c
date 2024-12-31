#include<stdio.h>
int main()
{
    int a=219,b,c,i,s[9],j,o=0,l,k,p,t,r=0,q;

  while(a<=267)
    {o=0;
        a++;


    b=a*2;
    c=a*3;
    l=a;
    k=b;
    p=c;
    for(i=0;i<=2;i++)
       {

        if(a<10)
    {
        s[i]=a;
        break;
    }
    s[i]=a%10;
    a=a/10;}
    for(i=3;i<=5;i++)
    {
        if(b<10)
        {
            s[i]=b;
            break;
        }
        s[i]=b%10;
        b=b/10;

    }
     for(i=6;i<=8;i++)
    {
        if(c<10)
        {
            s[i]=c;
            break;
        }
        s[i]=c%10;
        c=c/10;

    }

for(i=0;i<=8;i++)
    {for(j=0;j<=8;j++)
{if(i!=j)
{
    if(s[i]==s[j])
    {o=1;
        break;
    }

}}
if(o==1)
    {
        break;
    }
}
if(o!=1)
{
    printf("%d %d %d\n",l,k,p);

}}
}
