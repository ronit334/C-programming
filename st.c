int main()
{
    int i,j,a[4],g;
    char s[4];

    printf("enter");
    scanf("%s",s);
    for(i=0;i<=s[i];i++)
        a[i]=s[i];
    for(j=0;j<=s[i];j++)
    {
        for(i=0;i<=s[i];i++)
        {
            if(j!=i)
            {
                if(a[j]==a[i])
                    {
                        a[i]=0;
                    }

                       else{
                        if(a[j]+32==a[i])

                            {

                             a[i]=0;
                         }}}
            }
            }


    for(i=0;i<=s[i];i++)
        {s[i]=a[i];}
    printf("%s",s);
}
