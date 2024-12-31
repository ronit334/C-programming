#include<stdio.h>
int main()
{

   int a,l,i,j,g=1;
  printf("");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {l=0;
   g++;
    if(g==2)
    {
      printf("2 ");
      continue;
    }
    for(j=2;j<g;j++)
    {
      if(j%g!=0)
      {
        l=1;
      }
      else{
        l=0;
        break;
      }
    }
    if(l==1)
    {printf("%d ",g);
    }

  }
}
