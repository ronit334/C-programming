#include<stdio.h>
int main()
{
    int a,v,i=2,l,b=1;
    printf("enter");
    scanf("%d",&a);
    while(1)
    {
        for(v=i;v>=1;v--)
        {
            b=b*v;
        }
        if(b==a)
        {
            printf("%d",l);
        }
        else{
            i++;
            l=i;
        }
    }
}
