#include<stdio.h>
int main()
{
    int a,i;
    float b=0.000000,c;
    printf("");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        c=1.000000/i;
        b=b+c;
    }
    printf("%.6f",b);

}
