#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int space=1;
        while(space<=n-i+1){
            cout<<space;
            space=space+1;
        }
        int j=1;
        while(j<=i-1){
            cout<<"*";
            j=j+1;
        }
        int k=1;
        while(k<i){
            cout<<"*";
            k=k+1;
        }
        int count=1;
        while(count<=n-i+1){
            cout<<n-count-i+2;
            count=count+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}