#include<stdio.h>
struct node{
struct node *left;
struct node *right;
int d;


};
void insert(struct node **s,int a){
struct node *n,*t,*v;
n=(struct node*)malloc(sizeof(struct node));
n->d=a;
n->left=NULL;
n->right=NULL;
if(*s==NULL)
    *s=n;
else{

    t=*s;
    while(1)
    {
        if(t->d>n->d)
        {  if(t->left==NULL)
            {t->left=n;
            break;}
            else
                t=t->left;
        }
        else{
            if(t->right==NULL)
            {t->right=n;
            break;}
        else
            t=t->right;

        }
    }

}




}
int main()
{
    struct node *n=NULL;
    insert(&n,5);
    insert(&n,4);
    n=n->left;
    printf("%d",n->d);

}
