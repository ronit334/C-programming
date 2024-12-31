#include<stdio.h>
int main()
{
int a=1,c=1,g,v=1,i,j,d,l=1;
for(j=1;j<=4;j++)
{i=1;
d=j;
v=l;
while(d)
{
    v=v*10;
    d--;
}

    while(1)
    {printf("%d",a);
        i++;
        if(i>j)
            {if(c>v)
              c=c-v;
                break;}
        g=c;
        while(1)
        {
            d=c;
            c=c/10;
            if(c==0)
                break;
        }
         l=d;
        a=a+d;

        c=g;
          if(c>v)
            {c=c-v;}

        c=c*10;

        c=c+a;


    }
    printf("\n");
}
}
