#include<stdio.h>
#include<string.h>
//#pragma pack(1)
struct A{
int a:16;
int b:17;
}__attribute__((packed,aligned(1)));
struct B{
long long c;
char d;
}__attribute__((packed));
struct C{
long long e;
 long g;
char f;
}__attribute__((packed,aligned(4)));
int main(){
struct A a;
struct B b;
struct C c;
printf("%lu\n",sizeof(a));
printf("%lu\n",sizeof(b));
printf("%lu\n",sizeof(c));
return 0;
}
