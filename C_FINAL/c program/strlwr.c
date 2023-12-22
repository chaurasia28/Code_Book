#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30];
    int i;
    printf("Enter the string");
    gets(s1);
    //strlwr(s1);
    for(i=0;s1[i]!='\0';i++)
    {if (s1[i]>='A' && s1[i]<='Z')
        s1[i]=s1[i]+32;
    }
    printf("%s",s1);
}
