#include<stdio.h>
void f1(int,int,int);
int main()
{
    int n,a,d=1;
printf("enter");
scanf("%d",&n);
a=n;
f1(n-(n-2),a,d);
getch();
}
void f1(int s,int b,int c)
{

    if(c>b)
    {
        printf("\nthe end");
    }
    else{
        printf("%d",s);
        f1(s+2,b,c+1);
    }
}
