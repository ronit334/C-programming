#include<stdio.h>
int main()
{
    int a[10],i,v,j,b,o,c,r,s[10];
    printf("enter");
    for(i=0;i<=5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=5;i++)
    {o=0;

    c=0;
        b=0;
        for(v=i+1;v<=5;v++)
        {if(o==1)
        {
            break;
        }
            for(j=0;j<=5;j++)
            {
                if(a[i]+a[v]==a[j])

               {



                    if(b!=a[i])
                   {

                    printf("%d + %d = %d\n",a[i],a[v],a[j]);
                    b=a[i];
                }
                else{
                        o=1;
                    break;}}}
                }}}




