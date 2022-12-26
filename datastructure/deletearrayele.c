#include<stdio.h>
main()
{
    int i,n,a[10],e,p;
    printf("enter n");
    scanf("%d",&n);
    printf("enter the array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   printf("enter the element to be deleted\n");

   scanf("%d",&e);
   for(i=0;i<n;i++)
   {
       if(a[i]==e)
       {
           p=i;
           printf("the element which is to be deleted is present at %d index\n ",p);
       }
   }
   for(i=0;i<n;i++)
   {
       a[p+i]=a[p+i+1];
   }
   printf("Your array after deletion is\n ");
   for (i=0;i<n-1;i++)
   {
       printf("%d\n",a[i]);
   }

}
