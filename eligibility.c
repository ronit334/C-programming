#include<stdio.h>
int main()
{
    int a,b,c;
    char l;
    printf("");
    scanf("%d %d %d",&a,&b,&c);
fflush(stdin);
    printf("");
    scanf("%c",&l);


if(l=='X')
    {if(a>=90 && b>=85 && c>=75)
    {   if((a+b+c)>=255)
        {printf("1 X");}
        else{
            printf("0");
        }}

    else{
        printf("-1 X\n");
        if(a>=75 && b>=80 && c>=85)
        {
            printf("1 Z");
        }
        else{
            printf("he is not eligible for admission");
        }


        }}


if(l=='Y')
   {

    if(a>=80 && b>=90 && c>=85)
    {if(a+b+c>=260)
        {printf("1 Y");}
        else{
            printf("0");
        }
    }
    else{
        printf("-1 Y\n");
        if(a>=90 && b>=85 && c>=75)
        {
            printf("1 X");
        }
        else if(a>=75 && b>=80 && c>=85)
            {
                printf("1 Z");
            }
            else{
                printf("he is not eligible for admission");
            }
        }
    }
    if(l=='Z')
        {
            if(a>=75 && b>=80 && c>=85)
            {if(a+b+c>=255)
                {printf("1 Z");}
                else{
                    printf("0");
                }
            }
            else
            {printf("-1 Z\n");
                if(a>=90 && b>=85 && c>=75)
            {
                printf("1 X");
            }
            else{
                printf("he is not eligible for admission");
            }
        }
    }}


