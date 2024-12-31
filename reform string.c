#include<stdio.h>
int main()
{
    int w[15],m[15],i,j,b=0,c=0,q=0,o=0,x,y,r,e=0;
    char z[15],k[15],u[15];
    printf("enter");
    scanf("%d %d",&y,&x);
    fflush(stdin);

    printf("enter");
   gets(z);
   fflush(stdin);
   printf("enter");
   gets(u);

   printf("enter");
   gets(k);
puts(z);


        for(i=0;i<=z[i];i++)
        {

            b=b+1;
        }
       for(i=0;i<=u[i];i++)
       {

           c=c+1;
       }
       for(i=0;i<=k[i];i++)
       {
           w[i]=k[i];
           q=q+1;
       }
       for(i=0;i<b;i++)
       {
           m[i]=z[i];
           o=o+1;
       }
       c=c-1;
       c=b+c;
       for(i=b;i<=c;i++)
       {
           m[i]=u[e];
           o=o+1;
           e++;
       }
for(i=0;i<o;i++)
    printf("%c",m[i]);
    for(i=0;i<q;i++)
        printf("%c",w[i]);
    printf("%c",w[i]);

       for(j=0;j<q;j++)
       {
           r=0;
           for(i=0;i<o;i++)
           {
               if(m[j]==w[i])
               {
                   r=1;
               }
           }
           if(r==0)
           {
               break;
           }
       }
       if(r==1)
       {
           printf("1");

       }
       else{
        printf("-1");
       }}

