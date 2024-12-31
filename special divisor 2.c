#include<stdio.h>
int main()
{
    int a,b=1,c,l=0;
    printf("enter");
    scanf("%d",&a);
    while(1)
    {
        b++;


            c=b*b;
            if(c>a)
            {
                break;
            }
            while(1)
            {
                if(c>a)
                {
                    break;
                }
                if(c==a)
                {
                    l=1;
                    break;
                }
                else{
                    c=c*b;
                }
            }
            if(l==1)
            {
                break;
            }

    }
    if(l==1)
    {
        printf("%d",b);

    }
    else{
        printf("-1");
    }
}
