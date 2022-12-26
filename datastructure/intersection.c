#include<stdio.h>
main()
{
    int i,n,a[10],b[10],c[20],j,m,k=0;
    printf("enter no. of element in first set\n");
    scanf("%d",&n);
    printf("enter no. of element in second set\n");
    scanf("%d",&m);
    printf("enter the  first set\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the second set\n");
    for (j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
        if (a[i]==b[j])
        {
             c[k]=a[i];
             k++;
        }
     }
     }

     printf("intersection of both set is\n");

    for(i=0;i<k;i++)
    {
 printf("%d\n",c[i]);
    }
}