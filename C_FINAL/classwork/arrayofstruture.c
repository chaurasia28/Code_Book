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
    struct dob d1[3];
};
int main(){
struct student s1[3];
for(int i=0;i<3;i++){
printf("Enter the name of student\n");
scanf("%s",s1[i].name);
printf("Enter the rollno of student\n");
scanf("%d",&s1[i].roll);
printf("Enter the marks of student\n");
scanf("%d",&s1[i].marks);
printf("Enter the dob of student\n");
scanf("%d%s%d",&s1[i].d1[i].day,s1[i].d1[i].month,&s1[i].d1[i].year);
printf("DOB of %s having rollno %d is %d/%s /%d\n",s1[i].name,s1[i].roll,s1[i].d1[i].day,s1[i].d1[i].month,s1[i].d1[i].year);
}
return 0;
}
