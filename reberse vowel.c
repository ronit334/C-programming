#include<stdio.h>
int main()
{
    int a[30],k[30],l[30],i,j,b=0,e=0,o=0;
    char s[30];
    printf("");
    gets(s);
    for(i=0;i<=s[i];i++)
    {
        a[i]=s[i];
        b=b+1;
    }
    for(i=0;i<b;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            k[e]=a[i];
            o=o+1;
            e++;
        }

    }
    e=0;
    for(i=(o-1);i>=0;i--)
    {
        l[i]=k[e];
        e++;
    }
    e=0;
  for(i=0;i<b;i++)
    {
        for(j=0;j<o;j++)
        {
            if(a[i]==k[j])
            {
                a[i]=l[e];
                e++;
                break;
            }
        }
    }
    for(i=0;i<b;i++)
        printf("%c",a[i]);


}
