#include<stdio.h>
int main()
{
	int i,j,k,a[5][5],b[5][5],c[5][5];
	printf("Enter the element of matrix1:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the element of matrix2:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("enter the element of two martix");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=0;
			for(k=0;k<2;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("multipilcation  martrix of two matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",c[i][j]);
		}
			printf("\n");
	}
}
