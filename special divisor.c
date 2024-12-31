#include<stdio.h>
int main()
{
    int a,b=2,i,c;
    printf("");
    scanf("%d",&a);
    while(1)
    {

        if(a%b==0)
        {
            a=a/b;
            if(a==1)
            {
                break;
            }
            i=1;
            c=a;
        }
        else{
            b++;
            i=0;
        }
    }
    if(i==1)
    {
        printf("%d",c);

    }
    else if(i==0)
    {
        printf("-1");
    }
}
