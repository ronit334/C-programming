#include<stdio.h>
int main()
{
    int a[20],l[20],b=0,c,v=0,k[25],e=0,i,j,o=0,u=0;
    char s[20];
    printf("enter");
    gets(s);
    for(i=0;i<=s[i];i++)
    {
        a[i]=s[i];
        b=b+1;
    }

    for(i=0;i<b;i++)
    {c=0;
        if(a[i]!=0)
        {
            for(j=0;j<b;j++)
            {
                if(a[i]==a[j])
                {
                    c=c+1;
                    if(c>1)
                    {
                        a[j]=0;
                    }
                }
            }}

            if(c!=0)
            {
                l[e]=c;
                e++;
                o=o+1;

                if(c>=v)
                {
                    v=c;
                }
            }



    }

e=0;
       for(i=0;i<b;i++)
       {
           if(a[i]!=0)
           {
               k[e]=a[i];
               u=u+1;
               e++;

           }
       }
    for(i=0;i<o;i++)
       {if(l[i]>=v)
       {
           printf("%c %d\n",k[i],l[i]);
       }}

}
