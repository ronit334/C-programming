#include<stdio.h>
int f1(int [],int);
int main()
{
    int a[10],s,n;
    printf("enter array number");
    scanf("%d",&n);
    s=f1(a,n);
    printf("%d",s);
}
int f1(int b[],int c)
{
    int l,a,i;
    printf("enter");
    for(i=0;i<c;i++)
        {scanf("%d",&b[i]);}
        a=b[0];
        l=0;
        for(i=0;i<c;i++)
        {
            if(a>=b[i+1])
            {
                a=b[i+1];
                l=i+1;
            }
        }
        return l;

}
