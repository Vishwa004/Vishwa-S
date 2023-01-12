#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int adding(int *a,int *b);
	int a,b;
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	adding(&a,&b);

}
int adding(int *a,int *b)
{
	int c;
	c=*a+*b;
	printf("The sum of %d and %d is %d",*a,*b,c);
}
