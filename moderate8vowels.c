#include<stdio.h>
int main()
{
	int i=0,k=0;
	char str[10];
	printf("enter the character\n");
	scanf("%d",&str);
	gets(str);
	while(str[i]!='\0')
	{
		if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='u'||str[i]=='U')
		k++;
		i++;
	}
	printf("NO of vowels= %d",k);
}
