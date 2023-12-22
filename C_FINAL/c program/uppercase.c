#include<stdio.h>
#include<string.h>
void main()
{
    char character;
    printf("enter the character");
    scanf("%c",&character);
    (character>='A'&&character<='Z')? printf("upper case alphabet"):printf("lower case alphabet");
}
