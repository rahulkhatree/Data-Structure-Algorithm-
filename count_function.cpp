#include<iostream>
using namespace std;
//function signature
void count(){

    //function body
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}
int main(){

    //function call
    count();
    return 0;
}