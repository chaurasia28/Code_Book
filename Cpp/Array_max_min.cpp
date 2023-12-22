#include <iostream>
using namespace std;
void array_max_min(int arr[],int n,int k)
{
  if(k==2)
  {
    int max=arr[0];
    for(int i=0;i<n;i++)
      {
        if(arr[i]>max){
            max=arr[i];
        }
      }
    cout<<"Maximum element :"<<max<<endl;
  }
  else if(k==1){
    int min=arr[0];
    for(int i=0;i<n;i++)
      {
        if(arr[i]<min)
        {
          min=arr[i];
        }
      }
    cout<<"Minimum element :"<<min<<endl;
  }
}
int main()
{
  int arr[100];
  int n;
  cout<<"Enter size of an array"<<endl;
  cin>>n;
  cout<<"Enter elements of an array"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter Keys:"<<endl;
  int k;
  cin>>k;
  array_max_min(arr,n,k);
}