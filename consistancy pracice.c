#include<stdio.h>
int main()
{
    int a[20][20],i,j,n;
    printf("enter");
    scanf("%d",&n);
    a[0][0]=1;
    i=0;
    for(j=0;j<n;j++)
    {   if(j>=1)
        a[j][0]=a[j-1][i-1];
        i=0;
        while(1)
        {
            printf("%d ",a[j][i]);
            i++;
            if(i>j)
                break;
            a[j][i]=a[j-1][i-1]+a[j][i-1];

        }
        printf("\n");
    }

}
