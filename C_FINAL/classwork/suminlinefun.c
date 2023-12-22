#include<stdio.h>
 static inline void sum(int i,int j){
printf("Sum=%d",i+j);
}
int main(){
int a,b;
scanf("%d%d",&a,&b);
sum(a,b);
return 0;
}
