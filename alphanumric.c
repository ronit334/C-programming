#include<stdio.h>
#include<string.h>


    int main()
    {
        int a[10],i,j,b=0;
        char s[10];
        printf("enter");
        gets(s);

        for(i=0;i<=s[i];i++)
            a[i]=s[i];

   for(i=0;i<=s[i];i++)
       {

        if(a[i]>=65 && a[i]<=90)
        b=1;
   else if(a[i]>=97 && a[i]<=122)
    b=1;

   else if(a[i]>=48 && a[i]<=57)
    b=1;

   else{
    b=0;
    break;
   }}

   if(b!=0)
    printf("this is alphanumeric");
   else{
    printf("this is not alphanumeric");
   }
    }




