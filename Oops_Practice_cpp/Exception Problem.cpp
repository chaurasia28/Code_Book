/*Create an array of type double with length 4 and store any 4 values in it. Ask from the user to enter
an index number. If index is invalid, throw an exception "Error: Array out of bounds!“ otherwise, print
all the values from array.*/
#include<iostream>
using namespace std;
int main()
{
  try{
  int index;
  double arr[4]={1,2,3,4};
  cin>>index;
    if(index>3)
    {
      throw "Error:array out of bounds!";
    }
    else
    {
      //for range
      for(int i:arr)
        {
          cout<<i<<" ";
        }
    }
  }
    catch(const char* err)
    {
      cout<<err;
    }
}