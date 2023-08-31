#include<stdio.h>
int main()
{
	int r,c;
	printf("Enter rows and column");
	scanf("%d %d",&c, &r);
	int a[r][c];
	printf("Enter elements of array");
	printf("\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
  printf("original matrix");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
  int ar[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			ar[i][j]=ar[(r-1)-j][i];
		}
	}
	printf("matrix after rotation\n");
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
	
}
