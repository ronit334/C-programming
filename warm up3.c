#include<stdio.h>
int main()
{
    char s[20];
    int i=0,j=2,a=47,n,c,d,v,l=0,*p;
    printf("enter");
    gets(s);
    n=strlen(s);
    i=0;
    p=(int*)malloc(4*n);
    for(i=0;i<n;i++)
        p[i]=s[i];
    while(j)
    {i=0;
        while(i<n)
        {
            if(p[i]==a)
            {if(p[i-1]!=0 && p[i+1]!=0)
            {c=p[i-1];
            d=p[i+1];



            }
            else{
                if(p[i-1]==0)
                    c=l;
                    else
                      d=l;
            }
            if(a==47)
                v=c/d;
            else if(a==42)
                v=c*d;
            else if(a==43)
                v=c+d;
            else if(a==45)
                v=c-d;
                l=l+v;

            p[i]=0;
            p[i+1]=0;
            p[i-1]=0;

            }
            i++;
        }

           j--;
        if(a==47)
            a=42;
        else if(a==42)
            a=43;
        else if(a==43)
            a=45;
    }

printf("%d",l);


}
