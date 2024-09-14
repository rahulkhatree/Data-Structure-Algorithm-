#include<iostream>
using namespace std;
int main(){
    // for(int i=0;i<=5;i++){
    //     cout<<i<<" ";
    //     i++;
    // }




//  for(int i=0;i<=5;i--){
//         cout<<i<<" ";
//         i++;
    // }



    // for(int i=0;i<=15;i+=2){
    //     cout<<i<<" ";
    //     if(i&1){
    //         continue;
    //     }
    //     i++;
    // }





    // for(int i=0;i<=5;i++){
    //     for(int j=i;j<=5;j++){
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }



    // for(int i=0;i<=5;i++){
    //     for(int j=i;j<=5;j++){
    //         if(i+j==10){
    //             break;
    //         }
    //         cout<<i<<" "<<j<<endl;
    //     }
    // }





    // int n=11;
    // cin>>n;
    // int product=1;
    // int sum=0;
    // while(n>0){
    //     int rem=n%10;
    //     n=n/10;
    //     product=product*rem;
    //     sum=sum+rem;
    // }
    // cout<<product<<endl;
    // cout<<sum<<endl;
    // cout<<"Answer"<<(product-sum);




    int n;
    cin>>n;
    int count=0;
    while(n!=0){
        if(n&1){
            count++;
        }
       n= n>>1;
    }
    cout<<count;

    return 0;
}