#include<stdio.h>
int main()
{
    int a[30],b[15],i,j,o=0,e,n,x;
    printf("enter");
    scanf("%d",&n);
    printf("enter");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter");
    scanf("%d",&x);
    printf("enter");
    for(i=0;i<x;i++)
    scanf("%d",&b[i]);
    for(i=0;i<x;i++)
    {
        for(j=0;j<n;j++)
        {
            if(o==1)
            {
               if(b[i]==a[e+1])
               {
                   o=1;
                   e=e+1;
                   break;

               }
               else{
                o=0;
                break;
               }
            }
            else{
                if(b[i]==a[j])
                {
                    o=1;
                    e=j;

                    break;
                }
            }
        }
        if(o==0)
        {
            break;
        }
    }
    if(o==1)
    {
        printf("1");
    }
    else{
        printf("-1");
    }

}
