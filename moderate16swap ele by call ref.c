#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int swap(int *a,int *b,int *c);
	int a,b,c;
	printf("Enter three numbers to swap : ");
	scanf("%d%d%d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("%d %d %d",a,b,c);
}
int swap(int *a,int *b,int *c)
{
	int temp;
	temp=*a;
	*a=*c;
	*c=*b;
	*b=temp;
}
