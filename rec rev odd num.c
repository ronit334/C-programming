#include<stdio.h>
void f1(int);
int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    f1((n*2)-1);
    getch();
}
void f1(int a)
{
    if(a==-1)
    {
        printf("\nthe end");
    }
    else{
        printf("%d",a);
        f1(a-2);
    }
}
