#include<stdio.h>
int main()
{
	struct student
	{
		int roll_no;
		char name[10];
		int mark;
	}
	s1;
	struct student*p;
	p=&s1;
	printf("enter student details:\n");
	printf("Enter Student Roll no : ");
	scanf("%d",&p->roll_no);
	printf("Enter Student Name : ");
	scanf("%s",p->name);
	printf("Enter Student Mark: ");
	scanf("%d",&p->mark);
	printf("Roll no:%d\n",p->roll_no);
	printf("Name of the student:%s\n",p->name);
	printf("Mark of the student:%d",p->mark);
}
