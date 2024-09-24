#include<iostream>
using namespace std;
void rotate(int arr[],int n,int k){
    int arr1[n];
    for(int i=0;i<n;i++){
        
        int ans=(i+k)%n;
        int temp=arr[i];
        arr1[(i+k)%n]=arr[i];;
    }
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    rotate(arr,5,2);
    return 0;
}