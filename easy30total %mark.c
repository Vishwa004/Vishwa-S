#include <stdio.h>
 
struct student
{
    char name [30];
    int  marks[ 3];
    int  total;
    float percentage;
};
 
int main()
{
    struct student std;
    int i;
 
    printf("Enter name: ");
    gets(std.name);
 
    printf("Enter marks:\n");
    std.total=0;
    for(i=0;i< 3;i++){
        printf("Marks in subject %d: ",i+1);
        scanf("%d",&std.marks[i]);
        std.total+=std.marks[i];
    }
    std.percentage=(float)((float)std.total/(float)300)*100;
 
    printf("\nName: %s \nTotal Marks: %d \nPercentage: %.2f",std.name,std.total,std.percentage);
}
