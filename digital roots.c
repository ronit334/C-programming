#include<stdio.h>
int digital_root(int n) {
int i,b=0,c;
while(1)
{
    if(n>9)
    {  while(n)
       {c=n%10;
       b=b+c;

       n=n/10;
       }
    }
    else
        break;
    n=b;
    b=0;
}
 return n;

}
int main()
{
    digital_root(942);
}
