#include<stdio.h>
enum month{jan=1,feb,march,april,may,june,july,aug,sep,oct,nov,dec};
enum month prmonth;
char month[12][10]={"jan","feb","march","april","may","june","july","aug","sep","oct","nov","dec"};
int main(){
    for(prmonth=jan;prmonth<=dec;prmonth++){
    printf("%d\t%s\n",prmonth,month[prmonth-1]);
    }
    return 0;
}
