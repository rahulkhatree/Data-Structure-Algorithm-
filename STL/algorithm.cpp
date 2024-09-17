#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6 : "<<binary_search(v.begin(),v.end(),6)<<endl;

    cout<<"lower bound  "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"upper bound  "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl;

    int a=5;
    int b=6;

    cout<<"max "<<max(a,b)<<endl;
    cout<<"min "<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a :" <<a<<endl;

    string abcd="abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<" string "<<abcd;


    rotate(v.begin(),v.begin()+3,v.end());
    cout<<"After rotate "<<endl;
    for(int i:v){
       cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end());
    cout<<"after sorting"<<endl;
    for(int i:v){
        cout<<i<<" "; 
    }
    return 0;
}