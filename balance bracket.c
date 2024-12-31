#include<stdio.h>
int main()
{
    char s[20];
    int i,j,n,g=2;
    printf("");
   scanf("%[^\n]%*c", s);
   n=strlen(s);
   i=0;
   j=n-1;
   while(i<j)
{   if(s[i]==40)
      g=1;
      else
        g=2;
    if(s[i]==s[i+1]-g)
          i=i+2;

    else
    {if(s[i]!=s[j]-g)
   { break;

   }

    i++;
    j--;
   }}
   if(i>j)
    printf("1");
   else
    printf("-1");
}
