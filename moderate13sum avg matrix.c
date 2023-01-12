#include<stdio.h>
int main()
{
	int i,j,m,n,p;
	float a[10][10],sum=0.0,avg;
	printf("Enter the size of row and column:");
	scanf("%d%d",&m,&n);
	p=m*n;
	printf("Enter the  element martix");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+a[i][j];
		}
	}
	avg=sum/p;
	printf("sum of matrix is %f",sum);
	printf("\navg of matrix is %f",avg);
}
