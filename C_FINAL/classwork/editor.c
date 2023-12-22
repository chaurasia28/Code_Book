#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
char ch;
char file[50];
FILE *ptr;
printf("Files:");
printf("For Opening the file enter R\n");
printf("For Creating the file enter W\n");
printf("For Save a file enter S\n");
printf("Enter Character\n");
scanf("%c",&ch);
switch(ch){
case 'R':{
    printf("Enter the File Name");
    scanf("%s",file);
    ptr=fopen(file,"r");
    if(ptr!=NULL){
        printf("File open successfully");
    }
    else
    {
        printf("file not found");
    }
}
break;
case 'W':{
    char a[50];
    printf("Enter a string");
    getchar();
    gets(a);
    ptr=fopen(file,"w");
    for(int i=0;i<strlen(a);i++){
       fputc(a[i],ptr);
    }
    fclose(ptr);
}
break;
}
}
