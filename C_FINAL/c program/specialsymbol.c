#include<stdio.h>
#include<string.h>
void main()
{
    char ch;
    printf("enter the CHARACTER");
    scanf("%c",&ch);
    (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'||ch>='0'&&ch<='9')?printf("not special symbol"):printf("special symbol");
}
