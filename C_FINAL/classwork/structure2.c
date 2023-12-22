#include<stdio.h>
#include<string.h>
struct dob{
    int day;
    char month[20];
    int year;
};
struct student{
    int roll;
    char name[20];
    int marks;
    struct dob d1;
};
int main(){
struct student s1;
printf("Enter the name of student\n");
scanf("%s",s1.name);
printf("Enter the rollno of student\n");
scanf("%d",&s1.roll);
printf("Enter the marks of student\n");
scanf("%d",&s1.marks);
printf("Enter the dob of student\n");
scanf("%d%s%d",&s1.d1.day,s1.d1.month,&s1.d1.year);
printf("DOB of %s having rollno %d is %d/%s /%d",s1.name,s1.roll,s1.d1.day,s1.d1.month,s1.d1.year);
return 0;
}
