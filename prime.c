#include<stdio.h>
int main()
{
    int a,b=0,c;

    printf("enter");
    scanf("%d",&a);

    for(c=2;c<a;c++)
    {
        if(a % c != 0)
        {
            b=a;
        }
        else{
            printf("this is not prime");
            break;
        }
    }
    if(b != 0)
    {
        printf("%d is a prime number",b);
    }
    getch();
}
