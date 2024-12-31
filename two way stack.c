#include<stdio.h>
struct S{
int *p,v,g,cap;



};
struct S* create(int s)
{
 struct S *a;
 a=(struct S*)malloc(sizeof(struct S));
 a->cap=s;
 a->g=s;
 a->v=-1;
 a->p=(int*)malloc(4*s);
 return a;

};
void insert(struct S *a,int d,int w)
{
    if(w==1)
    {if(a->v==a->g-1 || a->v==a->cap-1)
    {
        printf("overflow");
    }
    else{
        a->v++;
        a->p[a->v]=d;
    }

    }
    else{
        if(a->g==a->v+1 || a->g==0)
        {
            printf("overflow");
        }
        else{
            a->g--;
            a->p[a->g]=d;
        }

    }

}
int main()
{   int i;
    struct S *s;
    s=create(5);
    insert(s,6,0);
    insert(s,8,1);
    insert(s,2,0);
    insert(s,1,0);
    insert(s,7,1);
    for(i=0;i<=4;i++)
    printf("%d",s->p[i]);

}
