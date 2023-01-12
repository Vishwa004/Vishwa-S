#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int ini,fin;
	printf("Enter initial and final : ");
	scanf("%d%d",&ini,&fin);
	int perfect(int ini,int fin);
	perfect(ini,fin);
	
}
int perfect(int ini,int fin)
{
	int i,j,sum=0;
	for(i=ini;i<fin;i++)
	{
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
			
		}
		if(sum==i)
			{
				printf("%d\n",i);
				sum=0;
			}
		else
			sum=0;
	}
}

