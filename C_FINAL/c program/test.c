//write a program to check whether  alphabet  is vowel or not:
#include<stdio.h>
void main()
{
 char ch;
 printf("enter the alphabet:\n");
 scanf("%c",&ch);
 switch(ch)
 {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
    printf("vowel\n");
    break;
   default:
    printf("consonant\n");
 }
}
