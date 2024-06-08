//Count Ways to  move to stair
#include<iostream>
using namespace std;
long factorial(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
long countways(int n)
{
     long total=factorial(n+n);
     long total2=factorial(n);
     long res=(total/total2)/total2;
     return res;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Total Ways to climb the stairs:"<<countways(n);
}