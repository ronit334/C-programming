#include<stdio.h>
#include<conio.h>
void f1(int,int,int,int,int,int);
int main()
{
    int a,b,p,q,r=10,o=10;
    printf("enter");
    scanf("%d",&a);
    printf("enter");
    scanf("%d",&b);
    p=a*r;
    q=b*o;
    f1(p,q,a,b,r,o-1);
   getch();
}
void f1(int p,int q,int a,int b,int r,int o)
{
    if(q==0 && o==0)
    {r=r-1;
        p=a*r;
        o=10;
        q=b*o;
        f1(p,q,a,b,r,o-1);
    }
    else{
        if(p==q)
    {
        printf("%d",p);
    }
    else{

        q=b*o;
        f1(p,q,a,b,r,o-1);
    }}
}
