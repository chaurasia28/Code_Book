#include<stdio.h>
#include<string.h>
struct student{
     int id;
     char name[20];
     float maks;
};
struct student s1={1,"abc"};
int main(){
struct student *ptr=&s1;
printf("Roll no of %s is %d\n",ptr->name,ptr->id);
printf("Roll no of %s is %d\n",(*ptr).name,(*ptr).id);
return 0;
}
