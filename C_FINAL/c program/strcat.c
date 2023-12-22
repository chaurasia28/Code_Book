//Program to concatenate two string:
#include<stdio.h>
#include<string.h>
void main()
{
    char name1[20];
    char name2[10],ct,ct2;
    int len1,len2,i;
    printf("Enter name");
    gets(name1);
    gets(name2);
    len1=strlen(name1);
    len2=strlen(name2);
    //ct=strcat(name1,name2);
    ct2=strncat(name1,name2,3);
   /* for(i=0;i<=len2;i++)
    {
        name1[len1+i]=name2[i];
    }*/
    puts(name1);
    puts(ct2);

}
