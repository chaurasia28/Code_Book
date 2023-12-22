#include<iostream>
using namespace std;
void myHandler(){
    try{
        throw "some exception...";
    }
    catch(const char*){
        cout<<"Caught exception inside myHandler()!\n";
        throw; //rethrowing exception
    }
}
int main(){
    cout<<"main() started!\n";
    try
    {
        {
            myHandler();
        }
    }
    catch(const char*)
    {
        cout<<"Caught exception inside main()!\n";
    }
        cout<< "main() end!";
}