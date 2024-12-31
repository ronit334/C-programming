#include<stdio.h>
int f1(int,int);
int main()
{
    int n,a,p;
    printf("enter");
    scanf("%d",&n);
    a=n;
    p=f1(n-(n-1),a);
    printf("%d",p);
    getch();
}
int f1(int s,int b)
{
    int l;
    if(s==b)
    {
        return s;
    }
    else{
      l=s+f1(s+1,b);
      return l;
    }

}
