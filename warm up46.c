#include<stdio.h>
void trim(char *str)
{

    int i,j,v=0,n;
    for(i=0;str[i];i++)
    {

    }


    n=i;
    i=0;
    while(n)
    {
     if(str[i]==32)
            v++;
        else
            v=0;
     if(v<2)
     {
         printf("%c",str[i]);
     }
     i++;
     n--;
    }
}
int main()
{
   char s[100];
   int n;
   printf("enter");
   scanf("%[^\n]%*c", s);
   trim(s);
}
