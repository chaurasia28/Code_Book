//Time Complexity  for inserting/searching/deleting in case of unordered map is o(1).
//Time Complexity for inserting/searching/deleting in case of ordered map i.e map is o(logn).BST
#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<map>
using namespace std;
int main()
{
     //Creation of unordered map
     unordered_map<string,int>m;

     //Insertion-1:Rememeber we use insert for inserting in unordered map.Order is not maintain in unordered map.
     pair<string,int>p=make_pair("Hello",1);
     m.insert(p);
     //Insertion-2:
     pair<string,int>p2("Everyone",2);
     m.insert(p2);
     //Insertion-3:
     m["Hello"]=2;


     //Searching
     cout<<m["Hello"]<<endl;
     cout<<m.size()<<endl;
     cout<<m["Everyone"]<<endl;
     cout<<m.count("Hello")<<endl;//Tells whether element is present(1) or absent(0)
     //cout<<m.at("bro")<<endl;//ERROR
     cout<<m["bro"]<<endl;//Got 0 as it creates the entry in unordered map
     cout<<m.at("bro")<<endl;//Got 0     


    //iterator
    unordered_map<string,int>::iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }

     //Creation ofmap
     map<string,int>m2;

     //Insertion-1:Rememeber we use insert for inserting in ordered map.Order is maintain in ordered map.
     pair<string,int>p3=make_pair("Hello",1);
     m2.insert(p3);
     //Insertion-2:
     pair<string,int>p4("Everyone",2);
     m2.insert(p4);
     //Insertion-3:
     m2["Hello"]=2;


     //Searching
     cout<<m2["Hello"]<<endl;
     cout<<m2.size()<<endl;
     cout<<m2["Everyone"]<<endl;
     cout<<m2.count("Hello")<<endl;//Tells whether element is present(1) or absent(0)
     //cout<<m.at("bro")<<endl;//ERROR
     cout<<m2["bro"]<<endl;//Got 0 as it creates the entry in unordered map
     cout<<m2.at("bro")<<endl;//Got 0     


    //iterator
    map<string,int>::iterator its=m2.begin();
    while(its!=m2.end())
    {
        cout<<its->first<<" "<<its->second<<endl;
        its++;
    }

}