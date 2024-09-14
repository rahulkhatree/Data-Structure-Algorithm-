#include<iostream>
using namespace std;
int pivotno(int arr[],int n){
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
int binarysearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    while(end>=start){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int rotatedsearch(int arr[],int n,int target){
    // cin>>target;
    int pivot = pivotno(arr,5);
    if(target>=arr[pivot] && target<=arr[n-1]){
       return binarysearch(arr,pivot,n-1,target);
    }
    else{
       return binarysearch(arr,0,pivot-1,target);
    }
}
int main(){
    int arr[5]={4,6,1,2,3};
    cout<<rotatedsearch(arr,5,5);
    return 0;
}