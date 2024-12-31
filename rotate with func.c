#include<stdio.h>
void f1(int [],int);
int main()
{
    int a[10];
    f1(a,10);
}
void f1(int b[],int n)
{
    int c,i,t,l;
    printf("enter array size");
    scanf("%d",&c);
    printf("enter");
    for(i=0;i<c;i++)
        scanf("%d",&b[i]);
        for(i=0;i<c;i++)
       {

            if(i==0)
        {
            l=0;
            t=b[i+1];
            b[i+1]=b[i];

        }
        else if(i==c-1)
        {
            b[0]=b[c-1];
        }

        else{
            l=b[i+1];
            b[i+1]=t;
            t=l;
        }}

        for(i=0;i<c;i++)

           {

            printf("%d",b[i]);}
}
