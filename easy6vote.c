#include<stdio.h>
int main()
{
	int age,a;
	printf("Enter Your Age ");
	scanf("%d",&age);
	a=18-age;
	if(age>=18)
	printf("You are Eligible for Vote");
	else
	{
		printf("You are Not Eligible for Vote ");
		printf("\nYou want to wait %d",a,"year");
	}
}
