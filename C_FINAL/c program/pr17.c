//program to check no of vowels and consonants:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define sizes 10000
void main()
{   char str[sizes];
    int vowels,cons,len,i;
    vowels=0;
    cons=0;
    fgets(str,sizes,stdin);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
          vowels++;
        }
        else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
        {
            cons++;
        }
    }
printf("The total number of vowel in the string=%d\n",vowels);
printf("The total number of consonant in the string=%d\n",cons);
}
