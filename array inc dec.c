#include<stdio.h>
int main()
{
    int a[20],i,j,t,n,l,g;
    printf("enter");
    scanf("%d",&n);
    l=(n/2)-1;
    g=l-1;
    printf("enter");
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);

    for(j=1;j<=n;j++)
    {
        for(i=0;i<=n-1;i++)
        {
            if(a[i]<=a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(j=1;j<=n;j++)
    {

            for(i=n/2;i<=(n/2)+l;i++)
            {
                if(a[i]>=a[i+1])
                {
                    t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                }
            }
        }

    for(i=0;i<=n-1;i++)
        printf("%d",a[i]);

}
