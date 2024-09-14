#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // }


    // int i=1; 
    // for(;;){
    //     if(i<=n){
    //         cout<<i<<endl;
    //     }
    //     else{
    //         break;
    //     }
    //     i++;
    // }


    for(int i=0,j=1;i>=0,j>=1;i--,j-- ){
        cout<<i<<" "<<j;
    }

    return 0;
}