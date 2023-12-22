#include<stdio.h>
#define max 1000
struct Person
{
    char name[max];
    int age ;
    char coursename[max];
    char coursecode[max];
}s1;
int main()
{
    printf("Enter name");
    scanf("%s",s1.name);
    printf("Enter age");
    scanf("%d",&s1.age);
    printf("Enter coursename");
    scanf("%s",s1.coursename);
    printf("Enter course code");
    scanf("%s",s1.coursecode);
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%s\n",s1.coursename);
    printf("%s\n",s1.coursecode);

}
