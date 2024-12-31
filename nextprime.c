#include<stdio.h>
int nextprime(int,int);
int main()
{
    int x,y,s,h;
    printf("enyer");
    scanf("%d",&x);
    printf("enter");
    scanf("%d",&y);
    for(h=1;h<9;h++)
    s=nextprime(x,y);
    printf("%d",s);
    getch();


}
int nextprime(int a,int b)
{
    int c=0,i,j;
    for(i=a+1;i<b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j!=0)
            {
                c=i;
            }
            else{
                c=0;
                break;
            }
        }
        if(c!=0)
        {
            return c;
        }
    }
}
