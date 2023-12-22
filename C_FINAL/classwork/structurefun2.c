#include<stdio.h>
typedef struct student
{
int rollno;
char name[20];
}std;
void getdetail(std *s3){
printf("Enter the name and roll no\n");
scanf("%s %d",&s3->name,&s3->rollno);
//display(s2);
}
void display(std s2)
{
//printf("Name of student is:%s\n",s2.name);
//printf("Roll no of student is:%d\n",s2.rollno);
printf("%d %s",&s2.roll,s2.name)
}
int main(){
    int n;
    printf("Enter number of student\n");
    scanf("%d",&n);
    std s1[i];
    for(i=0;i<n;i++){
    getdetail(&s1[i]);
    }
    for(int i=0;i<n;i++)
    {
    display(s1[i]);
    }
   return 0;
}
