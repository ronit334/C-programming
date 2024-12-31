#include<stdio.h>
int main()
{
    int i,j,a=5,c=5,d,b=4,m=6;

 for(i=1;i<=5;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=4;j++)
            {
                if(j>=a)
                {if(j%2!=0)
                    {printf("*");}
                    else{
                        printf(" ");
                    }
            }
            else{
                printf(" ");
            }

        }
        a-=2;
        for(d=5;d<=9;d++)
            if(c>=d)
        {
            if(d%2!=0)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        else{
            printf(" ");
        }
        c+=2;
printf("\n");
    }


    else{
        for(j=1;j<=4;j++)
            if(j>=b)
        {
            if(j%2==0)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        else{
            printf(" ");
        }
        b-=2;
        for(d=5;d<=9;d++)
        {
            if(d==5)
            {
                printf(" ");
                continue;
            }

            if(m>=d)
            {

                if(d%2==0)
            {printf("*");}

            else
                {printf(" ");}}
                else{printf(" ");}

        }
        m=m+2;
        printf("\n");
    }
}
getch();
}
