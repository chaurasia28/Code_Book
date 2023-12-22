#include<stdio.h>
enum month{January=1,February,March,April,May,June,July,August,September,October,November,December};
enum month today;
char month[12][12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int main(){
printf("Display month:\n");
for(today=January;today<=December;today++){
    printf("%d\t%s\n",today,month[today-1]);
}
}
