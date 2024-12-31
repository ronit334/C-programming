#include<stdio.h>
void spin_words(const char *sentence, char *result) {
int i,v,g,j=0,n;
i=-1;
   while(sentence[i])
   {i++;
   g=i;
        v=0;
   while(1)
   {
       if(sentence[i]==32 || sentence[i]==0)
       {

        break;
       }
       else
        v++;
        i++;
   }
   if(v>=5)
   {
    n=i-1;

    while(1)
    {
        result[j]=sentence[n];

        j++;
        n--;
        if(sentence[n]==32)
        {

            break;
        }
        else if(n==-1)
            break;
    }

   }
   else{
    while(1)
    {
        result[j]=sentence[g];
        g++;
        j++;
        if(sentence[g]==32)
        {

            break;
        }
        else if(sentence[g]==0)
        {
            break;
        }
    }


   }
if(sentence[i]!=0)
{result[j]=32;
j++;}
else
{
    result[j]=0;

}

   }
for(i=0;result[i];i++)
    printf("%c",result[i]);



}







int main()
{
    char *p,*q;
    int i=0;
    p=(char*)malloc(100);
    q=(char*)malloc(100);
    printf("enter");
    while(1)
        {
            scanf("%c",&p[i]);
            if(p[i]==48)
                {p[i]=0;
            break;}
            i++;
            }

    spin_words(p,q);
}
