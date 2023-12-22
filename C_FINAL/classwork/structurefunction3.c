#include<stdio.h>
#include<string.h>
typedef struct student
{
int roll;
char name[20];
}std;

 void display(std s2){
 printf("Name of student is :%s\n",s2.name);
 printf("Roll number of student is:%d\n",s2.roll);
 }
int main()
{   std s1;
    printf("Enter Rollno and name of student\n");
    scanf("%d %s",&s1.roll,s1.name);
    display(s1);
    return 0;
}
