#include<stdio.h>
void f1(int , int);

int main()
{
    int n,a=0;
    printf("enter");
    scanf("%d",&n);
    f1(n,a);
    getch();

}
void f1(int s,int b)
{
    if(s==b)
    {printf("\nthe end");}
    else{
        printf("%d",s);
        f1(s-1,b);
    }
}
