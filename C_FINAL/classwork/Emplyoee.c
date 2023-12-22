//Details of Employees :
#include<stdio.h>
struct employee{
int id;
char name[50];
int salary;
}s1;
int main(){

    printf("Enter the employee id\n");
    scanf("%d",&s1.id);
    //printf("Enter the name of employee\n");
    //scanf("%s",s1.name);
    strcpy(s1.name,"radhe");
    printf("Enter the salary of employee\n");
    scanf("%d",&s1.salary);
    printf("Here's the details of employee\n");
    printf("Employee ID-->>%d\n",s1.id);
    printf("Employee Name-->>%s\n",s1.name);
    printf("Employee salary-->>%d\n",s1.salary);
}
