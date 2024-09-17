#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);


    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    s.erase(5);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    

    cout<<"0 is present or not  "<<s.count(0)<<endl;


    // cout<<"find 5 " <<s.find(1)<<endl;
    return 0;
}