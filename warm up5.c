#include<stdio.h>
int main()
{
    int a[10],n,i,s,v[5],e=0,b;
    printf("");
    scanf("%d",&n);
        printf("");
    scanf("%d",&s);
    printf("");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

     printf("");
    for(i=0;i<s;i++)
        scanf("%d",&v[i]);
  i=0;
       while(s)
       {b=v[i];
        b=b+n;
        e=e+a[b];
        i++;
         s--;
       }

    printf("%d",e);
}
