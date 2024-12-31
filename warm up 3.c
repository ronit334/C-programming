#include<stdio.h>
int main()
{
    char s[20];
    int d,i,g,n;
    printf("");
    gets(s);
    n=strlen(s);
    i=0;
    while(i<n)
    {if(s[i]==48)
    {
        printf(" ");
        i++;

    }
        d=s[i];
    d=d-48;
    i++;
    while(d)
    {
        printf("%c",s[i]);
        d--;
    }
    i++;

    }
}
