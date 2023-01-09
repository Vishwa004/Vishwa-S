#include<stdio.h>
#include<math.h>
int main()
{
    int powr(int, int);
    int add(int, int);
    int sub(int, int);
    int mul(int, int);
    int div(int, int);
	int x,n,c,choice;
	printf("enter the value x,n:");
	scanf("%d%d",&x,&n);
	printf("Enter you choice");
	scanf("%d",&choice);
	if(choice==1)
       {
       	c=powr(x,n);
	    printf("%d is",c);
	   }
	    	    
	if(choice==2)
		{
		c=add(x,n);
		printf("%d",c);
		}
    if(choice==3)
		{
		c=sub(x,n);
		printf("%d",c);
		}
	if(choice==4)
		{
		c=mul(x,n);
		printf("%d",c);
		}
	if(choice==5)
		{
		c=div(x,n);
		printf("%d",c);
		}

}
int powr(int x, int n)
   {
   	return(pow(x,n));   	
   }

int add(int x, int n)
   {
   	return(x+n);   	
   }
int sub(int x, int n)
   {
   	return(x-n);   	
   }
int mul(int x, int n)
   {
   	return(x*n);   	
   }
int div(int x, int n)
   {
   	return(x/n);   	
   }
   
