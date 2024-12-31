#include<stdio.h>
int main()
{
    int a,b,i,j,c;
    printf("");
    scanf("%d %d",&a,&b);
    if(b>=a)
    {for(i=b;i>=a;i--)
    {if(i==2)
    {
        printf("2");
        continue;
    }
        for(j=2;j<i;j++)
        {
            if(i%j!=0)
            {
                c=i;
            }
            else{
                c=0;
                break;
            }
        }
        if(c!=0)
        {
            printf("%d ",c);
        }
    }}
    else{
        for(i=a;i>=b;i--)
    {
        for(j=2;j<i;j++)
        {if(i==2)
        {
            c=2;
        }
            else if(i%j!=0)
            {
                c=i;
            }
            else{
                c=0;
                break;
            }
        }
        if(c!=0)
        {
            printf("%d ",c);
        }

    }


}}
