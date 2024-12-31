#include<stdio.h>
int main()
{
    int a,b,c,l,i,j,u=0;
    printf("");
    scanf("%d",&a);
    printf("enter");
    scanf("%d",&b);
    for(j=1;j<=100;j++)
      {

        c=a*j;
    for(i=1;i<=100;i++)
    {l=b*i;
        if(c==l)
        {
            u=1;
            break;
        }
    }
    if(u==1)
    {printf("%d",c);
        break;
    }
    }


}
