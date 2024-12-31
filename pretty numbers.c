#include<stdio.h>
int main(){
int a,b,c=0,s[3]={2,3,9},i,v=0,e=0;
printf("enter");
scanf("%d %d",&a,&b);


for(i=a;i<=b;i++)
{
    if(s[e]+c>=a && s[e]+c<=b)
    {
        printf("%d",s[e]+c);
    }
    e++;
    v++;
    if(v==3)
    {c=c+10;
        e=0;
        v=0;}
    }


}
