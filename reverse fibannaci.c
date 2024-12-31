#include<stdio.h>
int main()
{
    int d,a,b,c,l;
    printf("enter");
    scanf("%d",&d);
    a=1-2;
    b=1;
    while(1)
    {l=1;
    a=-1;
    b=1;

        if(d==0)
        {
            break;
        }
        else
        {while(1)
        {
            if(l==d+1)
            { break;}
                else{c=a+b;
                a=b;
                b=c;
                l=l+1;;}


        }}
        printf("%d ",b);
        d=d-1;;
    }
}
