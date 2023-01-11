#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float mark;
};
int main()
{
	struct student st[100];
	int n,i;
	printf("Enter the number of student details :");
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		printf("Enter student rollno:");
		scanf("%d",&st[i].rollno);
		printf("Enter student name :");
		scanf("%s",&st[i].name);
		printf("Enter student mark :");
		scanf("%f",&st[i].mark);
	}
	for(i=0;i<=n;i++)
	{
		printf("Roll No :%d\nName :%s\nMark :%f\n",st[i].rollno,st[i].name,st[i].mark);
	}
}
