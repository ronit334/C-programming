#include<stdio.h>
int main()
{
    int a,i,b,j,c;
    printf("");
    scanf("%d",&a);
    for(i=2;i<=a;i++)
        if(i%a==0)
    {c=i;
       b=0;
       for(j=2;j<c;j++)
       {
           if(j%c!=0)
           {
               b=1;
           }
           else{
            b=0;
            break;
           }
       }
       if(b==1)
       {
           printf("%d",c);
       }
    }

}

