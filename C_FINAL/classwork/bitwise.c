//write program to check if binary representation of a number is palindrome
#include<stdio.h>
int main(){
int num;
int rev=0;
int rem;
printf("Enter binary number\n");
scanf("%d",&num);
int a=num;
while(num!=0){
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}
if(a==rev){
    printf("Palindrome..\n");
}
else{
    printf("Not Palindrome...\n");
}
}
