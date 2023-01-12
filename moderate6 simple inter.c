#include<stdio.h>
int main()
{
	float si,p,n;
	int age,r;
	printf("Enter the princple amount:");
	scanf("%f",&p);
	printf("Enter the number of years:");
	scanf("%f",&n);
	if(p>0&&n>0&&n<30)
	{
		printf("Enter the age:");
		scanf("%d",&age);
		if(age<=65)
		r=12;
		else 
		r=10;
		si=p*n*r/100;
		printf("Enter the the simple inters %f",si);
	}
	else
	printf("Invalid");
}
