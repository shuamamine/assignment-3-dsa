#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the values of m and n");
	scanf("%d %d",&m,&n);
	int a[m][n];
	printf("Enter the elements");
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int rd=0,ld=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i==j)
			{
				rd=rd+a[i][j];
			}
			if((i+j)==(n-1))
			{
				ld=ld+a[i][j];
			}
		}
	}
	printf("Sum of right diagonal %d\n",rd);
	printf("Sum of left diagonal %d",ld);
	return 0;
}
