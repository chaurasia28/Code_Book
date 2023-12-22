#include<stdio.h>
#include<string.h>
struct student
{
int roll;
char name[20];
};
struct student s1={12,"hello"};
//scanf("%d%s",&s1.roll,&s1.name);
int main()
{
    struct student *s2=&s1;
    printf("Roll number of %s is %d",s2->name,s2->roll);
    printf("Roll number of %s is %d",(*s2).name,(*s2).roll);
    return 0;
}
