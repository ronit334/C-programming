#include<stdio.h>
int main()
{
    int o,a[20],s[20],g[20],i,b;
    printf("enter");
    scanf("%d",&o);
    printf("enter");
    for(i=0;i<o;i++)
    scanf("%d",&a[i]);
    printf("enter");
    for(i=0;i<o;i++)
    scanf("%d",&s[i]);
    for(i=0;i<o;i++)
       {b=s[i];
    g[b]=a[i];}
    for(b=0;b<o;b++)
        printf("%d",g[b]);



}
