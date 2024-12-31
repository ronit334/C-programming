#include <stdio.h>

int main(void) {
int a,b,c,d,i,n,l;
printf("");
scanf("%d",&n);
for(i=1;i<=n;i++)
{scanf("%d %d %d",&a,&b,&c);
if((a+1)*c>=b)
    printf("YES");
else
    printf("NO");

}



}
