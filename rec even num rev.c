#include<stdio.h>
void f1(int);
int main()
{
    int n;
    printf("enter");
    scanf("%d",&n);
    f1(n*2);
    getch();
}
void f1(int a)
{
   if(a==0)
   {
       printf("\nthe end");
   }
   else{
    printf("%d\t",a);
    f1(a-2);
   }
}
