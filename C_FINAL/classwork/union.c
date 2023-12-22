#include<stdio.h>
union student{
int roll;
char name[20];
}s1;
int main(){
printf("size-->>%d",sizeof(s1));
}
