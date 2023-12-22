#include<stdio.h>
#include<string.h>
void main()
{
    char character;
    printf("enter the character");
    scanf("%s",&character);
    if (character>='A' &&character<='Z')
    {
        printf("capital letter");
    }
    else if(character>='a' && character<='z')
    {
        printf("small case letter");
    }
    else if(character>='0' && character<='9')
    {
        printf("digit");
    }
    else
    {
       printf("special symbol");
    }
}
