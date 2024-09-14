#include<iostream>
using namespace std;
void position(int arr[],int size,int key){
        int start=0,start1=0;
        int end=size-1,end1=size-1;
        int ans,ans1;
        int mid=start+(end-start)/2;
        while(start<=end){
         mid=start+(end-start)/2;
            if(arr[mid]==key){
                ans=mid;
                end=mid-1;
            }
            if(arr[mid]>key){
                end=mid-1;
            }
            if(arr[mid]<key){
                start=mid+1;
            }
        }
        cout<<ans<<"    ";
        while(start1<=end1){
         mid=start1+(end1-start1)/2;
            if(arr[mid]==key){
                ans1=mid;
                start1=mid+1;
            }
            if(arr[mid]>key){
                end1=mid-1;
            }
            if(arr[mid]<key){
                start1=mid+1;
            }
        }
        cout<<ans1;

}
int main(){
    int arr[10]={1,1,2,2,2,2,3,3,4,5};
    position(arr,10,2);
    return 0;
}