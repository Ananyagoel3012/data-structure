#include<stdio.h>
main()
{
    int i,j,m,n,a[10][10],ele,*p,*ad,row,col;
    printf("Enter the rows and coloumn of the 2d matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter the 2d matrix\n");
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element whose address is to be found\n");
    scanf("%d",&ele);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(ele==a[i][j])
            {
                printf("Your element is present in %d row at %d coloumn\n",i,j);
                  row=i-1;
                 col=j;

            }
        }
    }
    p=&a[1][1];
    printf("Address of 1st element is %u\n",p);
    ad=p+(row*n+col)*sizeof(int);
    printf("Address of entered element is %u\n",ad);

}