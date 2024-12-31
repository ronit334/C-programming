#include<stdio.h>
int main()
{
    char s[20];
    int i,j,v,u,a=41,b=40,n;
    printf("enter");
    scanf("%[^\n]%*c", s);
    n=strlen(s);
    i=n-1;
    v=0;
    while(1)
    {
        if(s[i]==a)
        {j=i-1;

            while(j!=-1)
            {
                if(s[i]==s[j]+1 || s[i]==s[j]+2)
                {
                    s[i]=0;
                    s[j]=0;
                    break;
                }
                j--;
            }
            if(j==-1)
            {
                v++;
            }
        }
        if(i==-1)
        {
            printf("%c %d",b,v);
            printf("\n");
            v=0;
            if(a==41)
            {
                a=40;
                b=41;
            }
            else if(a==125)
            {
                a=123;
                b=125;
            }
            else if(a==93)
            {
                a=91;
                b=93;
            }
            i=0;
            while(i<n)
            {if(s[i]==a)
            {
                v++;
            }
                i++;
            }
            printf("%c %d",b,v);
            printf("\n");
            if(a==40)
            {

                a=125;
                b=123;
            }
            else if(a==123)
            {
                a=93;
                b=91;
            }
            else
                break;
            v=0;
            i=n;
        }

      i--;


}

}
