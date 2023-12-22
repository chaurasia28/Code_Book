#include<stdio.h>
int main(){
FILE* fptr;
char f[100];
printf("Enter file name\n");
scanf("%s",f);
fptr=fopen(f,"a");
if(fptr!=NULL){
    //fprintf(fptr,"Append this line\n");
    fputs("Append this line\n",fptr);
    fclose(fptr);
    printf("Appended successfully");
}
else{
    printf("Not Appended\n");
}
}
