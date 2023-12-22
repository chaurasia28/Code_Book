//program to check whether alphabet is vowel or consonant:
#include<stdio.h>
void main()
{char alp;
printf("enter any character");
scanf("%c",&alp);
if ((alp=='a')||(alp=='e')||(alp=='i')||(alp=='o')||(alp=='u')||(alp=='A')||(alp=='E')||(alp=='I')||(alp=='O')||(alp=='U'))
printf("yes,%c is a vowel",alp);
else
printf("consonant");
}
