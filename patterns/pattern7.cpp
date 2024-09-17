#include<iostream>
using namespace std;
int main(){
    int n,k=1;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<k;
            k=k+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}