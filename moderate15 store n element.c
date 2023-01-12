#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a[]={1,2,3,4};
	int i,*p,n;
	n=sizeof(a)/sizeof(a[0]);
	p=a;
	i=0;
	while(i<n)
	{
		printf("%d",*p);
		i++;
		p++;
	}
}

