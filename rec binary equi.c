#include<stdio.h>
int f1(int,int);
int f2(int,int,int);
int main()
{
    int a,b=256;
    printf("enter");
    scanf("%d",&a);
    f1(a,b);
    getch();
}
int f1(int a,int b)
{int c=0;
    if(a>=b)
    {
        f2(a,b,c);
    }
    else{
        b=b/2;
        f1(a,b);
    }
}
int f2(int a,int b,int c)
{int l,d;
    l=b+c;
    if(b==0)
    {
        printf("\nthe end");
    }

   else if(a>=l)
    {
        d=1;
        printf("%d",d);
        if(a==l)
        {
            a=0;
        }
        if(c==0)
        {c=b;}
        b=b/2;
        f2(a,b,c);
    }
    else{
        d=0;

        printf("%d",d);
        b=b/2;
        f2(a,b,c);
    }
}
