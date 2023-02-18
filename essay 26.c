#include <stdio.h>  
#include<string.h>
int main ()  
{  
    struct student
    {
        int roll;
        char  g[2];
    };
    int n,i,c=0;
    struct student s[10];
    printf("Enter the number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d%s",&s[i].roll,s[i].g);
    for(i=0;i<n;i++)
     if(strcmp(s[i].g,"A") || strcmp(s[i].g,"a"))
       c=c+1;
    printf("No. of A grade = %d",c);
}
