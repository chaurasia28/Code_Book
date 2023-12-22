#include<stdio.h>
int main(){
FILE* fptr;
char f[100];
printf("Enter file name\n");
scanf("%s",f);
fptr=fopen(f,"r");
fgets(f,50,fptr);
if(fptr !=NULL){
printf("File has successful opened ,You can read it\n");
}
else
{
printf("Oops,Some Error");
}
fclose(fptr);
return 0;
}
