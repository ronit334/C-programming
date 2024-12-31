#include<stdio.h>
int main()
{
    int i,j,a,n;
    printf("enter");
    scanf("%d",&n);
    for(j=2;j<n;j++)
    {
        for(i=2;i<11;i++)
        {
            if(j*i==n)
            {a=j*i;
               break;
            }
        }
        if(a==n)
            break;
    }
    if(j==n)
        printf("this is prime");
    else
        printf("this is not prime");
}
