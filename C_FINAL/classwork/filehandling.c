#include<stdio.h>
#include<string.h>
int main(){
FILE *ptr;
//ptr=fopen("clockcycle.c","r");
ptr=fopen("Priya.text","w");
//ptr=fopen("Priya.text","a");
if(ptr!=NULL){
    printf("File open successfully");
}
else
{
    printf("file not found");
}
char a[50];
printf("Enter a string");
//scanf("%s",a);
gets(a);
for(int i=0;i<strlen(a);i++){
   fputc(a[i],ptr);
}
fclose(ptr);
return 0;
}
