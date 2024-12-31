#include<stdio.h>
int main()
{
    int a,b=1,c=1;
    printf("");
    scanf("%d",&a);

    while(1)
    { if(a==1)
    {
        printf("0 1");
        break;
    }
    else if(a==0)
    {
        printf("1");
        break;
    }
        b++;
        c=c*b;
        if(c<=a)
        {
            if(c==a)
            {
                printf("%d",b);
                break;
            }

        }
        else{
            printf("-1");
            break;
        }
    }
}
