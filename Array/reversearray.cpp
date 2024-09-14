#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
         int temp = arr[i];
        arr[i]=arr[size-i-1];
         arr[size-i-1]=temp;
        //  cout<<arr[i];
    }
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    // int start=0;
    // int end=size-1;
    // for(int i=0;i<=size/2;i++){
    //     if(start<=end){
    //         int temp = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = temp;
    //     }
    //     start++;
    //     end--;
    // }
    // for(int i=0;i<11;i++){
    //     cout<<arr[i]<<" ";
    //  }
}
int main(){
    int arr[11]={1,2,3,4,5,6,7,8,9,9,9};
    reverse(arr,11);
    
    return 0;
}