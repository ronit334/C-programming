main()
{
    int a,i;
 printf("enter");
 scanf("%d",&a);
 for(i=2;i<a;i++)
 {
     if(a%i==0)
     {break;

     }
 }
 if(i==a)
    printf("the number is prime");
 else
    printf("the number is not prime");
}
