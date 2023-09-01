#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter limit\n");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter elemnts of array\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
  printf("Original Matrix");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	int t=n*n,z=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				z++;
			}
		}
	}
	if(z>((n*n)/2))
	{
		printf("Sparse matrix");
	}
	else
	{
		printf("not sparse matrix");
	}
	
}
