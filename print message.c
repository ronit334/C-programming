#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter");
    scanf("%d",&a);
    if(a%2!=0 && a>5)
    {
        printf("OPGT5");
    }
    else if(a%2!=0 && a<=5 && a>=0)
    {
        printf("OPLTE5");
    }
    else if(a<0)
    {
        b=0-a;
        if(b%2!=0)
        {
            printf("ON");
        }
        else{
            printf("EN");
        }
    }
    else if(a%2==0 && a<=50 && a>=0)
    {
        printf("EPLTE50");
    }
    else if(a%2==0 && a>50)
    {
        printf("EPGT50");
    }


}
