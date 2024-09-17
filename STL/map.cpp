#include<iostream>
#include<map>
using namespace std;
int main (){
    map<int,string> m;
    m[1]="Rahul";
    m[13]="Khatri";
    m[2]="Tushar";
    m.insert({5,"bheem"});

    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    // m.erase(13);
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    auto itr=m.find(5);
    for(auto i=itr;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
} 