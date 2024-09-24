#include<iostream>
using namespace std;
int ishcf(int n,int m){
    int ans=m;
    for(int i=1;i<=n;i++){
        if(n%i==0 && m%i==0){
            ans=i;
        }
    }
    return ans;
}


//euclid's algorithm 
int gcd(int a,int b){
    if(a==0)
    return b;
    if(b==0)
    return a;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    cout<<ishcf(0,36)<<endl;
    cout<<gcd(48,0);
    return 0;
}