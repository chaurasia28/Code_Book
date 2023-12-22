#include<stdio.h>
enum week_of_day{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
enum week_of_day today;
int main(){
    enum week_of_day today=Sunday;
    printf("Today,Day is %d that denotes Sunday",today);
}
