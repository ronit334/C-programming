#include<stdio.h>
struct node{
int a;
int pri;
struct node *next;


};
void insert(struct node **s,int d,int p)
{
    struct node *v,*t=NULL,*g=NULL;
    v=(struct node*)malloc(sizeof(struct node));
    v->a=d;
    v->pri=p;
    v->next=NULL;
    if(*s==NULL)
        *s=v;
    else if((*s)->pri<v->pri)
    {
        v->next=*s;
        *s=v;
    }
    else{

        t=(*s)->next;
        g=*s;
        while(1)
        {if(t==NULL)
         {printf("%d",t->a);
             t=v;
             break;
         }
            else if(t->pri<v->pri)
            {printf("%d",t->a);
                v->next=t;
                g->next=v;

                break;
            }
                g=t;
            t=t->next;

        }
    }

}
void del(struct node **s)
{
    struct node *t;
    t=*s;
    *s=t->next;
    free(t);
}
    int main()
    {
        struct node *t=NULL;
        insert(&t,5,10);
        insert(&t,7,11);
        insert(&t,6,9);
        printf("%d",t->a);

    }
