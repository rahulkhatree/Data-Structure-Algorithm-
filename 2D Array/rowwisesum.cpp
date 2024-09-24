#include<iostream>
using namespace std;
void printsum(int arr[][3],int n,int m){
    //row wise sum
    // for(int i=0;i<n;i++){
    //     int sum=0;
    //     for(int j=0;j<m;j++){
    //        sum=sum+arr[i][j];
    //     }
    //     cout<<sum<<" ";
    // }
    //column wise sum
    for(int i=0;i<m;i++){
        int sum=0;
        for(int j=0;j<n;j++){
           sum=sum+arr[j][i];
        }
        cout<<sum<<" ";
    }
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    printsum(arr,3,3);
    return 0;
}