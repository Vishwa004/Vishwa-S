#include<stdio.h>
int main()
{
	int i,j,a[10][10];
	printf("enter the element of matrix:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the daigonal martix\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		if(i==j)
		printf("%d\t",a[i][j]);
		else
		printf("\t");
		}
		printf("\n");
	}
}
