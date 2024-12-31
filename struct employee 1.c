#include<stdio.h>
struct Emp{
int empid;
char name[20];
float salary;};
int main()
{struct Emp b1[6],*p;
int i,j,k,v[6],e=0,s;
float c[6];

p=&b1;
    printf("enter");
    for(i=0;i<=5;i++)
scanf("%d",&b1[i].empid);
for(i=0;i<=5;i++)
    scanf("%s",&b1[i].name);
fflush(stdin);
for(i=0;i<=5;i++)
    scanf("%f",&b1[i].salary);
for(i=0;i<=5;i++)
   {

    c[i]=b1[i].salary;}
for(j=1;j<=6;j++)
{
    for(i=0;i<=4;i++)
    {
        if(b1[i].salary>=b1[i+1].salary)
        {
            k=b1[i].salary;
            b1[i].salary=b1[i+1].salary;
            b1[i+1].salary=k;
        }
    }
}
for(s=0;s<=5;s++)
{
    for(i=0;i<=5;i++)
    {
        if(b1[s].salary==c[i])
        {
            v[e]=i+1;
            e++;
        }
    }
}

for(i=0;i<=5;i++)
    printf("emp %d =  %f\n",v[i],b1[i].salary);

}
