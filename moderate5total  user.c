#include<stdio.h>
int main()
{
	int su,i,j;
	printf("Enter the total user and staff user:");
	scanf("%d%d",&i,&j);
	su=i-j+j/100;
	printf("Student User: %d",su);
}
