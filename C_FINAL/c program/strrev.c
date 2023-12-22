#include<stdio.h>
#include<string.h>
void main()
{
    char name[30];
    int len,temp,i;
    printf("Enter name");
    gets(name);
    len=strlen(name);
    //strrev(name);
    for(i=0;i<len/2;i++)
    {
        temp=name[i];
        name[i]=name[len-1-i];
        name[len-1-i]=temp;
    }
    printf("%s",name);

}
