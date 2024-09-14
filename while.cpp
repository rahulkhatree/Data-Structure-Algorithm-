#include<iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int i=1;
    // while(i<=n){
    //     cout<<i<<endl;
    //     i=i+1;
    // }
    // int n;
    // cin>>n;
    // int i=1;
    // int sum=0;
    // while(i<=n){
    //     sum=sum+i;
    //     i=i+1;
    // }
    // cout<<sum;
    // int n;
    // cin>>n;
    // int i=2;
    // int sum=0;
    // while(i<=n){
    //     sum=sum+i;
    //     i=i+2;
    // }
    // cout<<sum;
    int n;
    cin>>n;
    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"not Prime";
            break;
        }
        i=i+1;
    }
    if(i==n){
        cout<<"Prime";
    }
    return 0;
}