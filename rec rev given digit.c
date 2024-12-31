#include<stdio.h>
void f1(int);
int main()
{
    int p,x;
    printf("enter");
    scanf("%d",&x);
    p=x%10;
    printf("%d",p);
    f1(x/10);
    getch();
}
void f1(int n)
{
    int l;
    if(n<10)
    {
        printf("%d",n);
    }
    else{
        l=n%10;
        printf("%d",l);
        f1(n/10);
}}
