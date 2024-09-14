#include<iostream>
using namespace std;
bool ifprime(){
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
   return 1;
}
int main(){
    if(ifprime()){
        cout<<"Prime";
    }
    else{
        cout<<" Not Prime";
    }
    return 0;
}