#include<stdio.h>
#define max 100
char str[max];
char out[max];
int top=-1;
int count=0;
void push(char ch)
{
    if(top==max-1){
        printf("Stack overflow..\n");
        return ;
    }
    top++;
    str[top]=ch;
}
char pop()
{
    if(top==-1){
        printf("Stack underflow..\n");
        return 0;
    }
    return out[count++]=str[top--];

}
int main()
{
    printf("Enter string...\n");
    gets(str);
    for(int i=0;str[i]!='\0';i++)
    {
        push(str[i]);
    }
    for(int i=0;str[i]!='\0';i++){
        pop();
    }
    for(int i=0;out[i]!='\0';i++){
        printf("%c",out[i]);
    }
  return 0;
}
