#include<stdio.h>
int main()
{
    char str[100];
    char str2[100];
    int count=0;
    int i=0;
    printf("Enter string..\n");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>'a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z')
        {
            str2[count]=str[i];
            count++;
        }
    }
        printf("%s",str2);
}
