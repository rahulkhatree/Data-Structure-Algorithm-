#include<iostream>
using namespace std;
int peakvalue(int arr[],int n){
    // int max=INT32_MIN;
    // int ans=-1;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>=max){
    //         max=arr[i];
    //         ans=i;
    //     }
    // }
    // return ans;

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<e){

        
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;

}
int main(){
    int arr[5]={0,4,1,0,-1};
    cout<<peakvalue(arr,5);
    return 0;
}