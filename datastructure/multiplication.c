#include<stdio.h>
main()
{
    int a[10][10],b[10][10],c[10][10],m,n;
    printf("Enter the row and coloum of first matrix \n");
    scanf("%d%d",&m,&n);
    printf("Enter the first matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the second matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%d\t",b[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=0;k<m;k++)
            {
              c[i][j]=a[i][k]+b[k][j];
            }
        }
    }
    printf("Your resultant matrix\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           printf("%d\t",c[i][j]);
        }
        printf("\n");
    }