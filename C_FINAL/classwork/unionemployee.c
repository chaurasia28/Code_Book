#include<stdio.h>
union employee{
int e_id;
char name[20];
char department[20];
}e1;
int main(){
printf("Enter E_id\n");
scanf("%d",&e1.e_id);
/*printf("Enter name\n");
scanf("%s",e1.name);
printf("Enter department\n");
scanf("%s",e1.department);*/
printf("Details of employee\n");
printf("E_id-->>%d\n",e1.e_id);
/*printf("Name-->%s\n",e1.name);
printf("Department-->>%s\n",e1.department);*/
}
