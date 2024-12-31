#include<stdio.h>
int f1(int ,int ,int);
int main()
{
    int n,a,d=1,k;
    printf("enter");
    scanf("%d",&n);
    a=n;
    k=f1(n-(n-2),a,d);
    printf("%d",k);
    getch();
}
int f1(int s,int b,int e)
{
    int l;
    if(e==b)
    {
        return s;
    }
    else{
        l=s+f1(s+2,b,e+1);
        return l;
    }
}
