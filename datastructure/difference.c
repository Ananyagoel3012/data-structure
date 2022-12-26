#include<stdio.h>
main()
{
    int i,n,a[10],b[10],c[20],j,m;
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
    for (i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if (a[i]-b[j]==0)
            {
                continue;
            }
            else
            {
                c[i]=a[i];
                break;

            }
        }
    }
    printf("difference of both set is\n");

    for(i=0;i<m+n;i++)
    {
 printf("%d\n",c[i]);
    }


}
