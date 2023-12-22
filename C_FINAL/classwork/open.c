#include<stdio.h>
int main(){
FILE* fptr;
char f[100];
printf("Enter the file name:\n");
scanf("%s",f);
fptr=fopen(f,"r");
if(fptr!=NULL){
printf("Yes,File has successful opened\n");
}
else{
printf("File don't exist\n");
printf("Some Error in opening file\n");
printf("Try Later\n");
}
}
