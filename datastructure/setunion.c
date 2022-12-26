#include<stdio.h>
main()
{
    int i,n,a[10],b[10],c[20],j,m,k=0,l=0;
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
        c[i]=a[i];
        k++;
    }
    printf("union of both set is");

    for(i=0;i<k+l;i++)
    {
 printf("%d\n",c[i]);
    }


}

    for(i=0;i<m;i++)
    {
        for (j=0;j<k+2;j++)
        {
            if (c[j]==b[i])
            {
               continue;
            }
             else
            {
                c[k+l]=b[i];
                l++;
                k++;

            }

        }

    }