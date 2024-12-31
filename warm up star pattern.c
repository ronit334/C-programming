#include<stdio.h>
int main()
{
    int i,j,k,n,l,v,g;
    printf("");
    scanf("%d",&n);
    v=2*n-1;
    l=2*n-1;
    l=l+1;
    for(i=1;i<=v;i++)
    {   if(i<=n)
        k=i-1;
        else if(i==n+1)
        {l=l+2;
       k=n-2;
            g=k;

        }
        else
            k=--g;
        for(j=1;j<=v;j++)
        {if(j>=l)
            n++;
            printf("%d",n);
            if(k)
            {
                k--;
                n--;
            }
        }
        printf("\n");
       if(i<=n)
        l--;
       else
        l++;

    }
}
