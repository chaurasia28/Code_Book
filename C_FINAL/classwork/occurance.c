#include<stdio.h>
int main()
{
    char str[100];
    char ch;
    int count=0;
    gets(str);
    scanf("%c",&ch);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf("Frequency of %c = %d",ch,count);
}
