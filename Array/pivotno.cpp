#include<iostream>
using namespace std;
int pivot(int arr[],int n){
    int start=0;
    int end=n-1;
    while(end>start){
        int mid=start+(end-start)/2;
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
    }
    return end;
}
int main(){
    int arr[5]={3,5,1,2,3};
    cout<<pivot(arr,5);
    return 0;
}