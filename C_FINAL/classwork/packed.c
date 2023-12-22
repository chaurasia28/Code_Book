#include<stdio.h>
struct std
{
  char a;
  char b;
  int c:2;
  char d;
}__attribute__((packed));
struct std s1;
int main()
{
printf("%lu\n",sizeof(s1));
return 0;
}
