#include<stdio.h>
int main()
{
    int a[5],b=0,i;
    float c,l;
    printf("enter");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=4;i++)
       {

        b=b+a[i];}
    c=(b/153.00);
    l=c*100.00;

if(l<70.00)
{
    printf("you are not eligible");


}
else
    {printf("%.2f",l);}



}
