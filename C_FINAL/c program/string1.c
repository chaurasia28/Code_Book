#include<stdio.h>
void main()
{
    char name1[10],name2[10];
    printf("Enter the name");
    scanf("%s%s",name1,name2);
    printf("%s %s\n",name1,name2);
    printf("%10.5s %s\n",name1,name2);
    printf("%0.5s",name1);
}
