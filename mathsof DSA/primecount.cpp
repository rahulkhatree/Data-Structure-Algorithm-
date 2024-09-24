#include<iostream>
using namespace std;
int primecount(int n){
    if(n<2){
        cout<<"0";
    }
    int count=0;
    for(int i=2;i<=n;i++){
        int j=2;
        for(;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            count++;
        }
    }
    return count;
}
int main(){
    cout<<primecount(50);
    return 0;
}