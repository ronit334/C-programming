#include<stdio.h>
int f1(int,int);
int main()
{
    int x,s;
    printf("enter");
    scanf("%d",&x);

    s=f1(x%10,x/10);
    if(s==1)
    {
        printf("U");

    }
    else if(s==2)
    {
        printf("T");
    }
    else if(s==3)
    {
        printf("H");
    }
    else if(s==4)
    {
        printf("TH");

    }
    else if(s==5)
    {
        printf("TT");

    }

}
int f1(int a,int b)
{
    int c;
    if(b==0)
    {
        return 1;
    }

        c=1+f1(a%10,b/10);
        return c;
}

