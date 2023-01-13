#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c=0,temp;
	printf("Enter a number : ");
	scanf("%d",&a);
	temp=a;
	if(a<=0)
	{
		printf("Enter a valid number : ");
	}
	else
	{
		while(a!=0)
		{
			b=a%10;
			c=c+b*b*b;
			a=a/10;
		}
	
	if(c==temp)
	printf("Given number is armstrong number ");
	else
	printf("not a armstrong number ");
	}
}
