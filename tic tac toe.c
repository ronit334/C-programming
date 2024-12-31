#include<stdio.h>
int main()
{
int s[3][3]={{-1,-1,-1},{-1,-1,-1},{-1,-1,-1}},i,j,a,g=-1,v=0,d=0,n;
while(d<9)
{
    printf("enter");
    scanf("%d %d",&a,&n);
    system("cls");
    if(n>6)
    {i=2;
    j=n-7;
    }
    else if(n>3)
    {i=1;
    j=n-4;
    }
    else
    {i=0;
    j=n-1;
    }
 if(s[i][j]==-1)
        {s[i][j]=a;
 d++;}
 else
 {
     printf("game over");
     break;
 }
if(g==a)
 break;
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         printf("%d ",s[i][j]);
     }
     printf("\n");
 }
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {
         if(s[i][j]==a)
         {
             v=1;
         }
         else
         {v=0;
         break;}
     }
     if(v==1)
        break;
 }

 if(v==0)
 for(i=0;i<3;i++)
 {
     for(j=0;j<3;j++)
     {

     if(s[j][i]==a)
     {
         v=1;
     }
     else{
        v=0;
        break;
     }

     }
     if(v==1)
        break;
     }
    if(v==0)
    {
        for(i=0;i<3;i++)
        {
            if(s[i][i]==a)
            {
                v=1;
            }
            else{
                v=0;
                break;
            }
        }
    }
    if(v==0)
    {j=0;
        for(i=2;i>=0;i--)
        {
            if(s[j][i]==a)
            {
                v=1;
            }
            else{
                v=0;
                break;
            }
            j++;
        }
    }
    if(v==1)
    {
        printf("player %d is win",a);
        break;
    }
    g=a;
}
if(d==9)
    printf("game is draw");
}
