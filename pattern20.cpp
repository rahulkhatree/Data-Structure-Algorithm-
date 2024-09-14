#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=n-i;
        while(space>0){
            cout<<" ";
            space=space-1;
        }
        int j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }
        int a=1;
        while(a<i){
            cout<<i-a;
            a=a+1;
        }
        // int space=n-k;
        // while(space>=1){
        //     cout<<" ";
        //     space=space-1;
        cout<<endl;
        i=i+1;
    }
    return 0;
}