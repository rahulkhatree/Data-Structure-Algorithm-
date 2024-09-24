#include<iostream>
using namespace std;
bool ispresent(int arr[][4],int target,int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"enter target value   ";
    int target;
    cin>>target;
    if(ispresent(arr,target,3,4)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}