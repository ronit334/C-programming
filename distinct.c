#include<stdio.h>
int main()
{
    int a[5],i,j,t;
    printf("enter");
    for(i=0;i<=4;i++)
        scanf("%d",&a[i]);
    for(j=1;j<=4;j++)
    {
        for(i=0;i<=3;i++){
            if(a[i]>=a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;

        }}
    }
        for(i=0;i<=4;i++)

if(i==4)
{
    printf("%d",a[4]);
    break;
}

            else if(a[i]/a[i+1]!=1)
            printf("%d",a[i]);

return 0;}
