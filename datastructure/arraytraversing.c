#include<stdio.h>
main()
{
	int a[5],i,n;
	printf("enter no of element in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}