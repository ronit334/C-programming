#include<stdio.h>

    int main()
    {
        int a=-1,b=1,l,o,i=0,k=0,c,u;
        printf("");
        scanf("%d %d",&l,&o);

        while(1)
        {
            if(k==o)
            {
                break;
            }
            i++;
            c=a+b;
            a=b;
            b=c;
            if(c>=l)
            {
                if(c%l==0)
                {
                    k++;
                    u=i;
                }
            }
        }
        printf("%d",u);
    }
