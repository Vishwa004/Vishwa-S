#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[]={16, 18, 27, 16, 23, 21, 19};
	int n=sizeof(a)/sizeof(a[0]),i,temp,j;
	printf("Reversed array : ");
	for(i=0;i<=n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
