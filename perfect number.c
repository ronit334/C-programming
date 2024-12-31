#include<stdio.h>
int main()
{
    int a,i=1,b=0;
    printf("enter");
    scanf("%d",&a);
  while(1)
  {
      if(a==i)
      {
          break;

      }
      else{
        if(a%i==0)
        {
            b=b+i;
            i++;
        }
        else{
            i++;
        }
      }
  }
  if(b==a)
  {
      printf("1");
  }
  else{
    printf("-1");
  }
}
