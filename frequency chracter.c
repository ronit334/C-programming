#include<stdio.h>
int main()
{
    int a[25],i,j,b;
    char s[25];
    printf("");
    gets(s);
    for(i=0;i<=s[i];i++)
    {

        a[i]=s[i];}

        for(j=0;j<=s[j];j++)
        {b=0;
            for(i=0;i<=s[i];i++)
            {
                if(j==i)
            {
                b=b+1;
            }
            else{
                if(a[j]!=0)
                {
                    if(a[j]==a[i])
                {
                    b=b+1;
                    a[i]=0;
                }
                else if(a[j]==a[i]-32)
                {
                    b=b+1;
                    a[i]=0;
                }
                else if(a[j]==a[i]+32)
                    {
                        b=b+1;
                        a[i]=0;
                    }
            }
            else{break;}

            }}

                  if(b!=0)
                {printf("%c %d\n",a[j],b);}

        }

}
