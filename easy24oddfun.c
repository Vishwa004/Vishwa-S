#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	void check(int a);
	check(a);
}
void check(int a)
{
	if(a<=0)
	printf("The given number is Invalid");
	else if(a%2==0)
	printf("Given number is even ");
	else
	printf("Given number is odd ");
}
