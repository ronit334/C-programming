#include<stdio.h>
int main()
{
    int a[20],b[20],i,j,y=0,c=0,o=0;
    char s[20],v[20];
    printf("");
    gets(s);
    printf("");
    gets(v);
    for(i=0;i<=s[i];i++)
    {
        a[i]=s[i];
        y=y+1;
    }
    for(i=0;i<=v[i];i++)
    {
        b[i]=v[i];
        c=c+1;

    }
    if(y==c)
    {for(i=0;i<y;i++)
   {
       for(j=0;j<c;j++)
       {
           if(a[i]==b[j])
           {
               o=1;
               break;
           }
           else{
            o=0;
           }
       }
       if(o==0)
       {
           break;
       }
   }}
   if(o==1)
   {
       printf("1");
   }
   else{
    printf("-1");
   }

}
