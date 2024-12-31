#include<stdio.h>
int main()
{
    int a=4,b=4,c=4,i,j;
    for(j=1;j<=4;j++)
    {
        for(i=1;i<=7;i++)
        {
            if(a<=i && i<=4)
            {
                printf("%d",c);
            }
            else if(i<=4)
            {
                printf(" ");
            }
            if(b>=i && i>4)
            {c++;
                printf("%d",c);
            }
            else if(i>4)
                printf(" ");
                if (c>1 && i<=4)
                    c--;
        }
        c=4;
        printf("\n");
      a--;
      b++;
    }
}
