#include<stdio.h>
int main()
{
    int a[25],c[25],i,j,b=0,h[25],e=0;
    char s[25],g[25]="aeiou";
    printf("enter");
    gets(s);
    for(i=0;i<=s[i];i++)
        {a[i]=s[i];
        c[i]=g[i];}
        for(i=0;i<=a[i];i++)
        {
            for(j=0;j<=a[j];j++)
            {
                if(a[i]!=a[j])
                    {e=0;
                        h[e]=a[j];
                        e++;
                    }
            }
        }
         for(i=0;i<=a[i];i++)
         {
             for(j=0;j<=c[j];j++)
             {
                 if(h[i]==c[j])
                 {
                     b=b+1;

                 }
                 else if(h[i]==(c[j]-32))
                 {
                     b=b+1;

             }
         }}
         printf("%d",b);}

