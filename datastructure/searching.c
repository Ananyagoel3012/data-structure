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
    for(i=0;i<n;i++)
    {
        if (a[i]==a[i+1])
        {
            printf("repeated element found  %d ",a[i]);
        }


    }

}