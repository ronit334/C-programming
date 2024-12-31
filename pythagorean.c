#include<stdio.h>
int main()
{
    int a=2,b,c,v,u,y,n,i,k=0,l;
    printf("enter");
    scanf("%d",&n);
    while(1)
    {if(k==n)
    {
        break;
    }
         a++;
         v=a*a;
         b=a+1;
         c=b+1;
         l=c;



         for(i=1;i<=v;i++)
         {
             u=b*b;
             y=c*c;
             for(i=1;i<=v;i++)
             {if(u+v==y)
             {
                 printf("%d %d %d ",a,b,c);
                 k++;
                 break;
            }
            else{
              c++;

              y=c*c;
            }}
        c=l;


             b++;
             c++;}
         }
    }


