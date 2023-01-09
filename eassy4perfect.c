#include<stdio.h>
int main()
{
	int i,sum=0,num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	for(i=1;i<num;i++)
		if(num%i==0)
		sum=sum+i;
		if(sum==num)
		printf("The Given number is Perfect");
		else
		printf("The Given Number is Not Perfect");
}
