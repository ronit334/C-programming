#include<stdio.h>
void f1(int , int);

int main()
{
    int n,a;
    printf("enter");
    scanf("%d",&n);
    a=n;
    f1(n-(n-1),a);
    getch();
}

f1(int s,int b)
{
    if(s>b)    {

    }
    else{
        printf("%d\t",s);
        f1(s+1,b);
    }
}


