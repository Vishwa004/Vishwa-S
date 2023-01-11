#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,number;
	int power(int a,int b);
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	printf("Enter the following number to calculate : \n1) Power\n2) Add\n3) subtract\n4) Multiply\n5) Divide\nEnter your choice : ");
	scanf("%d",&number);
	switch(number)
	{
		case 1:
			printf("The power of given number using pow(x,n) = %f",pow(a,b));
			break;
		case 2:
			printf("The sum of given number is %d",a+b);
			break;
		case 3:
			printf("The answer subtracting both number is %d",a-b);
			break;
		case 4:
			printf("The product of the given numbers are %d",a*b);
			break;
		case 5:
			printf("The quotient of the given number dividing is %d",a/b);
			break;
		default:
			printf("Enter a valid choice ");
			break;
	}
}

