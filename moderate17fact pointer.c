#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int input,fact,a;
	int factorial(int *a);
	printf("Enter a number : ");
	scanf("%d",&input);
	if(input<0)
	{
		printf("invalid");
	}
	else
	factorial(&input);
}
int factorial(int *a)
{
	int i,fac=1;
	if(*a==0)
	printf("1");
	else{
	for(i=2;i<=*a;i++)
	{
		fac=fac*i;
	}
	printf("%d",fac);	
	}

}
