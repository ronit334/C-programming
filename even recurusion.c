#include<stdio.h>
void prime(int n,int v)
{
    if(n%v==0 && v<n)
        printf("this is not prime");
    else if(v<n)
        prime(n,v+1);
      else
      printf("this is prime");
}
int main()
{int n,v=2;
printf("enter");
scanf("%d",&n);
    prime(n,v);

}
