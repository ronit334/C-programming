#include<stdio.h>
void f1(int*,int*,int*,int*);
int main()
{
    int a,b,c,d;
    printf("enter");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    f1(&a,&b,&c,&d);

    printf("%d %d %d %d",a,b,c,d);


}
void f1(int *p,int *q,int *r,int *s)
{int f,e,t;
    t=*p;
    *p=*s;
    e=*q;
    *q=t;
    f=*r;
    *r=e;
    *s=f;
}
