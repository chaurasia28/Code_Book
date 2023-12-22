//Program to compare two strings:
#include<stdio.h>
#include<string.h>
void main()
{
    char s1[10];
    char s2[10];
    int flag=0,i;
    printf("Enter the first string");
    gets(s1);
    printf("Enter the second string");
    gets(s2);
    //flag=strcmp(s1,s2);
    for(i=0;s1[i]!='\0'|| s2[i]!='\0';i++)
    {
        s1[i]!=s2[i];
        flag=1;
    }
    if(flag==1)
    {
        printf("Same string");
    }
    else
    {
        printf("Not same");
    }

}
