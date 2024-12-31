#include<stdio.h>
int main()
{
    FILE *p;
    int i;
    char s[]="ronit";
    p=fopen("file handling.txt","w");
    for(i=0;i<strlen(s);i++)
    fputc(s[i],p);
    fclose(p);
}
