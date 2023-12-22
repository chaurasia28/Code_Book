//Details of student:
#include<stdio.h>
struct g_mail{
    char name1[50];
    int number;
    char domain[50];
};
struct student{
   int roll;
   char name[50];
   struct g_mail g1;
}s1;
int main(){
printf("Enter the roll_no of student-->>");
scanf("%d",&s1.roll);
printf("Enter the name of student-->>");
scanf("%s",s1.name);
printf("Enter the g-mail id of student-->>");
scanf("%s%d%s",s1.g1.name1,&s1.g1.number,s1.g1.domain);
printf("Here's the details of student");
printf("Student Rollno-->>%d",s1.roll);
printf("Student name-->>%s",s1.name);
printf("Student g_mail-->>%s%d%s",s1.g1.name1,s1.g1.number,s1.g1.domain);
}
