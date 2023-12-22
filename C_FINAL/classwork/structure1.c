#include<stdio.h>
#include<string.h>
struct name{
    char f1[100];
    char l1[100];
};
struct student{
    int rollno;
    struct name n1;
}s1;
int main(){
    printf("Enter the Roll no");
   scanf("%d",&s1.rollno);
   printf("Enter the name ");
   scanf("%s",s1.n1.f1);
   printf("roll no is %d of %s",s1.rollno,s1.n1.f1);
   return 0;

}
