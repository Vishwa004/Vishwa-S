#include<stdio.h>
int main()
{
	int i,p=60,q=70,r=3,c=0;
	for(i=60;i<=70;i++)
	{
		if(r!=c)
		{
			printf("%d\n",i);
			c++;
		}
		else
		{
			c++;
			continue;
		}
	}
}
