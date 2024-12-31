#include<stdio.h>
int main()
{
    int l=0,g=1,k=0,i,j,a;
    printf("");
    scanf("%d",&a);
    while(1)
    {l=0;
        g++;
        if(g==2)
        {
            printf("2 ");
            k++;
            continue;
        }
        else{
            for(j=2;j<g;j++)
            {
                if(g%j!=0)
                {
                    l=1;
                }
                else{
                    l=0;
                    break;
                }
            }

        }
        if(l==1)
        {
            printf("%d ",g);
            k++;
        }
        if(k==a)
        {
            break;
        }
    }
}
