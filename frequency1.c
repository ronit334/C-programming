#include<stdio.h>
int main()
{
    int a[20],i,j,v=0,n;
    printf("enter");
    scanf("%d",&n);
    printf("enter");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);}
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {if(j>=i)
                {v++;}
                else
                    break;
            }

           }
        if(v>0)
        {
            while(v)
            {printf("%d",a[i]);
            v--;
            }
        }
   v=0;
    }
}
