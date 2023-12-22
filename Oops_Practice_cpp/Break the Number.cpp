// Break the Number
#include <iostream>
using namespace std;
int main() {
  int n, arr[100];
  cout << "Enter size of an array:" << endl;
  cin >> n;
  cout << "Enter elements of an array:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
   for(int i=0;i<n;i++)
   {
     int temp=arr[i];
     int rev=0;
     while(temp!=0)
       {
         int rem=temp%10;
         rev=rev*10+rem;
         temp=temp/10;
       }
     int ans=rev;
     while(ans!=0)
       {
         int rem=ans%10;
         cout<<rem<<" ";
         ans=ans/10;
       }
   }
  return 0;
}