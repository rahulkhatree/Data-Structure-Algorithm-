#include<iostream>
using namespace std;
// int fact(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int nCr(){
//     int n,r;
//     cin>>n>>r;
//     int nCr=fact(n)/(fact(r)*fact(n-r));
//     return nCr;
// }


int nCr(){
    int n,r;
    cin>>n>>r;
    int factn=1;
    int factr=1;
    for(int i=n;i>(n-r);i--){
        factn=factn*i;
    }
    for(int i=1;i<=r;i++){
        factr=factr*i;
    }
    int nCr=factn/factr;
    return nCr;
}
int main(){
    int ans=nCr();
    cout<<"The nCr is"<<ans;
    return 0;
}