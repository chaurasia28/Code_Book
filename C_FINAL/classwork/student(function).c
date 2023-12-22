//Displaying Information about student:
#include<stdio.h>
struct dob{
int date;
char month[50];
int year;
};
struct student{
int roll;
char name[50];
struct dob d1;
}s1;
void getdetails(struct student *s2){
    printf("Enter rollno\n");
    scanf("%d",&s2->roll);
    printf("Enter name\n");
    scanf("%s",s2->name);
    printf("Enter dob\n");
    scanf("%d%s%d",&s2->d1.date,s2->d1.month,&s2->d1.year);
}
void showdetails(struct student *s3){
    printf("Here's the details of student\n");
    printf("Rollno-->>%d\n",(*s3).roll);
    printf("Name-->%s\n",(*s3).name);
    printf("Dob-->>%d/%s/%d\n",s3->d1.date,s3->d1.month,s3->d1.year);
}
int main(){
    getdetails(&s1);
    showdetails(&s1);
}
