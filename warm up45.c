#include<stdio.h>
struct node
{
  int n;
  char *name;
  struct node * next;
};


void searchToppers(struct node * list1,struct node * list2,struct node * list3,struct node  *list4)
{int k=3;
struct node *t=NULL;
t=list1;
while(list1!=NULL)
{
    if(t->n>=list1->n)
    {
        t=list1;
    }
    list1=list1->next;
}
list4=t;
t=list2;
while(list2!=NULL)
{
    if(t->n>=list2->n)
    {
        t=list2;
    }
    list2=list2->next;
}
list4->next=t;
t=list3;
while(list3!=NULL)
{
    if(t->n>=list3->n)
    {
        t=list3;
    }
    list3=list3->next;
}
list4->next->next=t;
while(k)
{
    for(i=0;list4->name[i];i++)
        printf("%c",list4->name[i])
        printf(" %d",list4->n);
    printf("\n");
    k--;
}
}
