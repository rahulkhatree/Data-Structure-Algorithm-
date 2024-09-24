#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>v){
    int i=0;
    int j=v.size()-1;
    for(;i<=j;i++){
        int temp = v[i];
        v[i]=v[j];
        v[j]=temp;
        j--;


    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    reverse(v);
    return 0;
}