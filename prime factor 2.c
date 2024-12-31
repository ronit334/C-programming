#include<stdio.h>
int main()
{
    int a,i=2,b,c;
    printf("");
    scanf("%d",&a);
    while(1)
    {if(a==1)
    {
        break;
    }
        if(a%i==0)
        {
            if(a=a/i)
            {
                if(i==2)
                {
                    printf("%d\n",i);
                    continue;
                }
                else{
                    for(c=2;c<i;c++)
                       {

                        if(i%c!=0)
                    {
                        b=i;
                    }
                    else{
                        b=0;
                    }}
                    if(b!=0)
                    {
                        printf("%d ",b);
                    }
                }
            }
        }
        else{
            i++;
        }
    }


}
