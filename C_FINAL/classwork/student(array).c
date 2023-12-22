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
   struct g_mail g1[100];
}s1[100];
int main(){
int n;
printf("Enter Total number of Entries");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter the roll_no of student-->>");
scanf("%d",&s1[i].roll);
printf("Enter the name of student-->>");
scanf("%s",s1[i].name);
printf("Enter the g-mail id of student-->>");
scanf("%s%d%s",s1[i].g1[i].name1,&s1[i].g1[i].number,s1[i].g1[i].domain);
printf("Here's the details of student\n");
printf("Student Rollno-->>%d\n",s1[i].roll);
printf("Student name-->>%s\n",s1[i].name);
printf("Student g_mail-->>%s%d%s\n",s1[i].g1[i].name1,s1[i].g1[i].number,s1[i].g1[i].domain);
}
}
