#include<stdio.h>
main()
{
    int i,n,a[10],e,*p,s,*ad;
    printf("enter n\n");
    scanf("%d",&n);


    printf("enter the array\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
     printf("Enter the element whose address is to be calculated\n");
    scanf("%d",&e);
   for(i=0;i<n;i++)
   {
       if (a[i]==e)
       {
           printf("your element is present at %d index\n",i);
           n=i;
       }
   }

   p=&a[0];
   s=sizeof(int);
   printf("%u is the address of first element\n",p);

   ad=p+(n*s);
   printf("%u is the address of your  element\n",ad);
}