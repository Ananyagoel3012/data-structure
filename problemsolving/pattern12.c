#include<stdio.h>
main()
{
	int i,k,j=1,m,n;
	printf("enetr no of rows");
		scanf("%d",&m);
	printf("enetr no of column");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		while(j<m)
		{
		if(j<m/2)
		{
			printf("%d",i);
			i++;
		}
			else
			{
				printf("%d",i-1);
				i--;
			}
			printf("\n");
		}	
		}
	}