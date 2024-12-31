#include<stdio.h>

int main()
{

    int a[10],i,j=0,n,m=0,g=0,v=0;
    printf("");
    scanf("%d",&n);
    printf("");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        i=m;
        while(g==0)
        {   while(i<n)
        {if(a[i]==0)
         g++;
         else
            v++;
        j++;
         i++;
        }
      if(g==v)
      {

            printf("%d",j);
          break;
      }
       else
        {m++;
        i=m;

            g=0;
            v=0;
           j=0;


        }

        }


}
