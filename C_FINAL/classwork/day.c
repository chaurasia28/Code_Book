#include<stdio.h>
enum day{sunday,monday,tuesday,wednesday,thursday,friday,saturday};
enum day today=tuesday;//if not define by default zero(today is pointing to memory location)
int main(){
    printf("%d\n",today+5);
    return 0;
}
