#include<stdio.h>
int main()
{
    int a[20],k[20],i,j,t,b=0,c=0;
    char s[20],l[20];
    printf("enter");
    gets(s);
    printf("enter");
    gets(l);
    for(i=0;i<=s[i];i++)
    {
        a[i]=s[i];
        k[i]=l[i];
        b=b+1;
    }

    for(i=0;i<b;i++)
    {
        for(j=0;j<b;j++)
        {
            if(a[i]==k[j])
            {if(i!=j)
                {t=a[i];
                a[i]=a[j];
                a[j]=t;
                c=c+1;
                break;}
                else{
                    break;
                }
            }
        }
    }

        printf("%d",c);

}
