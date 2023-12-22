//Program to find the length the string:
#include<stdio.h>
#include<string.h>
void main()
{
    char name[20];
    unsigned int i=0,count=0;
    printf("Enter name ");
    gets(name);
    //count=strlen(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    puts(name);
    printf("Length of string=%d",count);

}
