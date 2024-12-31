#include<stdio.h>
int main()
{
    int s[25],i=0,a,b=0,c,x;
    printf("");
    scanf("%d",&x);
    while(1)
    {
        if(x>=10)
        {
            a=x%10;
        }
        else{
            a=x;
        }
        s[i]=a;
        x=x/10;
        i++;
        if(x==0)
        {
            break;
        }
        b=b+1;;

    }
    for(i=b;i>=0;i--)
    {if(s[i]==0)
        {
            printf("Zero ");
        }
       else if(s[i]==1)
        {
            printf("One ");

        }
        else if(s[i]==2)
        {
            printf("Two ");
        }
        else if(s[i]==3)
        {
            printf("Three ");
        }
         else if(s[i]==4)
        {
            printf("Four ");
        }
         else if(s[i]==5)
        {
            printf("Five ");
        }
         else if(s[i]==6)
        {
            printf("Six ");
        }
         else if(s[i]==7)
        {
            printf("Seven ");
        }
         else if(s[i]==8)
        {
            printf("Eight ");
        }
         else if(s[i]==9)
        {
            printf("Nine ");
        }

    }


}
