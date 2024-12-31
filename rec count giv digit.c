#include<stdio.h>
int f1(int);
int main()
{
    int n,p,s;
    printf("enter");
    scanf("%d",&n);
    p=n%10;
    n=n/10;
    s=p+f1(n);
    printf("%d",s);
    getch();
}
int f1(int x)
{
    int l;
    if(x<10)
    {
        return x;
    }
    else{
       l=x%10+f1(x/10);
       return l;
    }
}
