#include<iostream>
#include<vector>
using namespace std;
int good(vector<int> arr,int x){
    int count=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]&arr[j]==x){
                count++;
            }
        }
    }
    return count;
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(1);
    v.push_back(5);
    v.push_back(7);
    v.push_back(3);
    cout<<good(v,1);
    // cout<<v.size();

    return 0;
}    