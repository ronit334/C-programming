#include<stdio.h>
char *accum(const char *source)
{
    char *p,c;
    int i,e=0,l;

    p=(char*)malloc(100);
    i=0;
    while(1)
    {    if(source[i]>=97)
        c=source[i]-32;
        else
            c=source[i];
     l=i+1;
        while(l)
        {if(l==i)
          c=c+32;
          p[e]=c;
          e++;
         l--;
        }
        i++;
        if(!source[i])
            {p[e]=0;
                break;}
        p[e]=45;
        e++;

    }
return p;
}
int main()
{
    char *p;
    int i=0;
    p=(char*)malloc(100);

    printf("enter");
    while(1)
        {
            scanf("%c",&p[i]);
            if(p[i]==48)
                {p[i]=0;
            break;}
            i++;
            }
            accum(p);
}
