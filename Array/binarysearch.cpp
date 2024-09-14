#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
 int start=0;
 int end=size-1;
 
 while(start<=end){
    // int mid=(start+end)/2;
    int mid=start+(end-start)/2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]>key){
        end=mid-1;
    }
    else{
        start=mid+1;
    }
 }
 return -1;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    cout<<binarysearch(arr,5,3);
    return 0;
}