#include<stdio.h>
int main(){
FILE* fptr;
char f[100];
printf("Enter File name:\n");
scanf("%s",f);
fptr=fopen(f,"w");
//fprintf(fptr,"%s %s %s %s","WE", "are", "in", "2023");
fputs("we are in 2023",fptr);
char ch=fputc("a",Tfptr);
//printf("%c",40,ch);
fclose(fptr);
return 0;
}
