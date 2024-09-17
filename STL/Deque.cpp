#include<iostream>
using namespace std;
#include<deque>
int main(){
    deque<int> d;
    cout<<"size  "<<d.size()<<endl;
    d.push_back(1);
    cout<<"size  "<<d.size()<<endl;
    d.push_front(3);
    cout<<"size  "<<d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    // d.pop_back();
    // cout<<"size  "<<d.size()<<endl;


    d.erase(d.begin(),d.begin()+1);    //d.erase(d.begin())
    cout<<"size  "<<d.size()<<endl;


    return 0;
}