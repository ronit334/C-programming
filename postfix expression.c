#include<stdio.h>
int main()
{char s[20];
int i,j,*p,v=0,n;
    printf("");
    scanf("%[^\n]%*c", s);
    n=strlen(s);
    p=(int*)malloc(sizeof(int)*n);
    i=0;
    while(i<n)
    {
        if(s[i]>=41 && s[i]<=47 || s[i]==94)
        {if(s[i]==43)
        {
            p[v-2]=p[v-2]+p[v-1];

            v=v-1;
        }
       else if(s[i]==45)
        {
            p[v-2]=p[v-2]-p[v-1];
            v=v-1;
        }
        else if(s[i]==42)
        {
            p[v-2]=p[v-2]*p[v-1];
            v=v-1;
        }
       else if(s[i]==47)
        {
            p[v-2]=p[v-2]/p[v-1];
            v=v-1;
        }
       else if(s[i]==94)
       {
           j=p[v-2];
           while(p[v-1]!=1)
           {
               p[v-2]=p[v-2]*j;
               p[v-1]--;
           }
           v=v-1;
       }

        }
        else{
            p[v]=s[i];
            p[v]=p[v]-48;
            v++;
        }
        i++;
    }
    printf("%d",p[0]);
    getch();
}
