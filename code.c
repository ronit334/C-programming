#include<stdio.h>
int main()
{
    int a,b,c=1000,s=1000,l=0;
    printf("enter");
    scanf("%d",&a);
    while(1)
     {b=0;
        while(1)
        {


        if(c<=a)
        {
            b=b+1;
            c=s+c;
        }
        else{
            c=c-s;
            break;
        }}


        if(b==1)
        {
            printf("%d  %d\n",s,b);
        }
        else
        {
            printf("%d  %d\n",s,b);
            l++;}

            if(s==10)
            {
                break;
            }

        if(s==1000)
        {
            s=500;
            c=s+c;
            continue;
        }
        else if(s==500)
        {
            s=100;
            c=s+c;
            continue;
        }
        else if(s==100)
        {
            s=50;
            c=s+c;
            continue;

        }
        else if(s==50)
        {
           s=20;
           c=s+c;
           continue;
        }
        else if(s==20)
        {
            s=10;
            c=s+c;
            continue;
        }

    }
return 0;
}
