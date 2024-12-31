#include<stdio.h>
int main()
{
    int a[35],i,b=0;
    char s[35];
    printf("enter");
    gets(s);
    for(i=0;i<=s[i];i++)
    {
        a[i]=s[i];
        b=b+1;
    }
    for(i=0;i<b;i++)
    {
        if(i==0)
        {
            if(a[i]>=97 && a[i]<=122)
            {
                a[i]=a[i]-32;
            }
        }
        else if(a[i]==32)
        {

                if(a[i-1]>=97 && a[i-1]<=122)
                {a[i-1]=a[i-1]-32;}
                if(a[i+1]>=97 && a[i+1]<=122)
                {a[i+1]=a[i+1]-32;}

        }
        else if(i==(b-1))
        {
            if(a[i]>=97 && a[i]<=122)
               {
                   a[i]=a[i]-32;
               }
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%c",a[i]);
    }
}
