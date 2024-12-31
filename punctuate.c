#include<stdio.h>
#include <stdbool.h>
int is_pangram(const char *str_in) {
int a=97;
int i;
while(1)
{i=0;
while(str_in[i])
{
    if(str_in[i]==a || str_in[i]+32==a)
    {
        break;
    }
    i++;
}
if(str_in[i]==0)
    return 0;
else if(a==122)
    return 1;
a++;}


}
int main()
{
    char s[100];

    int a;
    printf("enter");
    scanf("%[^\n]%*c", s);
    a=is_pangram(s);
    printf("%d",a);

}
