#include<stdio.h>
int main()
{
    char s[20];
    int c,d,e,i=0,n,v,l,a=4,*p,k=4,g=0;
    printf("enter");
    scanf("%[^\n]%*c", s);
    n=strlen(s);

    for(i=0;i<n;i++)
        {
            if(s[i]!=40 && s[i]!=41 && s[i]!=42 && s[i]!=47 && s[i]!=43 && s[i]!=45)
                s[i]=s[i]-48;
        }


while(1)
     {i=0;
        while(i<n)
        {if(s[i]==a && a==40)
        {
            c=s[i+1];
            d=s[i+3];

            if(s[i+2]==43)
                l=c+d;
            else if(s[i+2]==42)
                l=c*d;
            else if(s[i+2]==45)
                l=c-d;
            else if(s[i+2]==47)
                l=c/d;
                s[i+2]=l;
                s[i]=0;
                s[i+1]=0;
                s[i+3]=0;
                s[i+4]=0;
                i=-1;
        }
        else if(s[i]==a)
            {
                c=s[i-1];

                d=s[i+1];
               if(s[i]==43)
                l=c+d;
            else if(s[i]==42)
                l=c*d;
            else if(s[i]==45)
                l=c-d;
            else if(s[i]==47)
                l=c/d;
               s[i]=l;
            s[i-1]=0;
            s[i+1]=0;
            g=0;
        v=0;
        while(g<n)
        {
            if(s[g]!=0)
                v++;
                g++;
        }

        p=(int*)malloc(4*v);
        g=0;
        e=0;
        while(g<n)
        {
            if(s[g]!=0)
            {
                p[e]=s[g];
                e++;
            }
            g++;
        }


        g=0;
        while(g<e)
        {
            s[g]=p[g];
            g++;
        }
        n=e;
        for(i=0;i<n;i++)
printf("%d",s[i]);
printf("\n");
i=-1;
            }
            i++;
        }

if(a==43)
    break;

        if(a==40)
            a=47;
        else if(a==42)
            a=43;


            }
i=0;



}
