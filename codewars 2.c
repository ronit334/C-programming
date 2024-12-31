#include<stdio.h>
void high_and_low (const char *strnum, char *result)
{
    int i=0,c,a,d=0,v=0,l=2,g=1;
    c=strnum[0];
    c=c-48;
    while(l)
    {while(strnum[i])
    {
        if(strnum[i]!=32)
        {   while(1)
            {if(strnum[i]==45)
            {
               v=1;
            }

            else if(strnum[i+1]!=32 && strnum[i+1]!=0)
            {
                a=strnum[i];
                a=a-48;
                d=d+a;
                d=d*10;
            }
            else
            {
                a=strnum[i];
                a=a-48;
                d=d+a;
                if(v==1)
                {d=0-d;
                v=0;}
                break;
            }
            i++;
            }
    if(c<=d && g==1)
        c=d;
     else if(c>=d && g==0)
            c=d;
        }
        d=0;
        i++;
    }
    i=0;
    d=0;
    printf("%d ",c);
    l--;
    g=0;
    }


}




int main()
{
    char *p,*q;
    int i=0;
    p=(char*)malloc(1000);
    q=(char*)malloc(1000);
    printf("enter");
    while(1)
        {
            scanf("%c",&p[i]);
            if(p[i]==',')
                {p[i]=0;
            break;}
            i++;
            }
          high_and_low(p,q);

}
