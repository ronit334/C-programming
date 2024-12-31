#include<stdio.h>
int main()
{
    char s[30];
    int g,v,a,i,n,l;
    printf("enter");
     scanf("%[^\n]%*c", s);
     n=strlen(s);
     i=0;
     a=s[i];
     l=i;
     v=0;
     while(1)
     { v=0;
    while(i<n)
         {if(s[i]==a)
     {
         v++;
         i++;
     }

     else{

        break;
     }}

     g=a-50;
     l=l+v;
     if(s[i]==46)
     {
         l=++l;
         i++;
     }

     a=s[l];
     v=v-1;
     g=g*3;
     g=g+65;
     g=g+v;
printf("%c",g);

     if(i==n)
        break;
      else if(s[i]=='0')
      {
          printf(" ");
          i++;
      }


     }
}
