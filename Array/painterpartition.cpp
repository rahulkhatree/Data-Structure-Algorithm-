#include<iostream>
using namespace std;
bool ispossible(int arr[],int n,int m,int mid){
    int painter=1;
    int board=0;
    for(int i=0;i<n;i++){
    if(board+arr[i]<=mid){
        board=board+arr[i];
    }
    else{
        painter++;
        if(painter>m || arr[i]>mid){
        return false;
        }
        board=arr[i];
    }
    }
    return true;
}
int painter(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
     int ans=-1;
    while(e>=s){
        int mid=s+(e-s)/2;
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
   return ans;
}
int main(){
    int arr[4]={5,5,5,5};
    cout<<painter(arr,4,2);
    return 0;
}