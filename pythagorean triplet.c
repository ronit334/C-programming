#include<stdio.h>
int main()
{
    int a=5,c,l,b,o,v,i,j,f,s;
    printf("");
    scanf("%d",&f);

for(s=1;s<=f;s++)

    {c=a*a;
    for(i=2;i<a;i++)
    {o=0;
        l=i*i;
        b=c-l;
        for(j=2;j<a;j++)
        {
            v=j*j;
            if(b==v)
            {

                o=1;
                break;
            }
        }
        if(o==1)
        {printf("%d %d %d\n",i,j,a);
            break;
        }
    }
    a++;
    }

}
