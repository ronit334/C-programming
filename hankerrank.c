#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    for(i=0;s[i];i++)
    {if(s[i]==32)
       printf("\n");
       else
        printf("%c",s[i]);}
    //Write your logic to print the tokens of the sentence here.
    return 0;
}
