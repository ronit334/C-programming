#include<stdio.h>
int main()
{
    int a[3][3],i,j,b[3][3];
   printf("enter");
    for(j=0;j<=2;j++)

        for(i=0;i<=2;i++)
        scanf("%d",&a[j][i]);
        printf("enter");
    for(j=0;j<=2;j++)

        for(i=0;i<=2;i++)
        scanf("%d",&b[j][i]);

    for(j=0;j<=2;j++){
        for(i=0;i<=2;i++)
    {printf("%d\t",a[j][i]*b[j][i]);}
    printf("\n");}}

