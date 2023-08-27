#include<stdio.h>
int main()
{
	int a[3][3];
	int r=0,r1=2,c=0,c1=2,j=1;
	do
	{
		for(int i=c1;i<=c1;i++)
		{
			a[r][i]=j;
			j++;
			
		}
		for(i=r+1;i<=r1;i++)
		{
			a[i][c1]=j;
			j++;
			
		}
		for(i=c1-1;i>=c;i--)
		{
			a[r1][i]=j;
			j++;
		}
		for(i=r1-1;i>=r+1;i--)
		{
			a[i][c]=j;
			j++;
		}
		
		r++;
		r1--;
		c++;
		c1--;
		
	}while(j<=9);
	printf("spiral matrix :");
	for(int i=0;i<=2;i++)
	{
		for(int j=0;j<=2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
