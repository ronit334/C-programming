#include<stdio.h>
#include <stdlib.h>

char* dna_strand(char *dna)
{int i;
char *p;
for(i=0;dna[i];i++)
{}
p=(char*)malloc(i);
i=0;
    while(dna[i])
    {if(dna[i]==65)
       p[i]=84;
    else if(dna[i]==84)
        p[i]=65;
        else if(dna[i]==71)
        p[i]=67;
        else if(dna[i]==67)
        p[i]=71;
        i++;}
        p[i]=dna[i];

       return p;

}
int main()
{
    char *p,*q;
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
            q=dna_strand(p);
            for(i=0;q[i];i++)
                printf("%c",q[i]);
}
