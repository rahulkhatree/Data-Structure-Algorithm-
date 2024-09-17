#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity after push 1 : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"capacity after push 2 : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity after push 3 : "<<v.capacity()<<endl;
    cout<<"size : "<<v.size()<<endl;

    cout<<"element at 2nd index  : " <<v.at(2)<<endl;

    cout<<"front  "<<v.front()<<endl;
    cout<<"back  "<<v.back()<<endl;
    

    cout<<"before pop"<<endl;
     for(int i:v){
        cout<<i<<" ";
     }
     cout<<endl;

     cout<<"before pop"<<endl;
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;

    v.pop_back();
    cout<<"capacity after pop : "<<v.capacity()<<endl;

    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"after clear size "<<v.size()<<endl;

    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int>b(a);
    for(int i:b){
        cout<<i<<" ";
    }
    return 0;
}