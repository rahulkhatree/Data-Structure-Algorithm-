#include<iostream>
using namespace std;
bool possiblesol(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pages=0;
    for(int i=0;i<n;i++){
        if(pages+arr[i]<=mid){
            pages=pages+arr[i];
        }
        else{
            studentcount++;
            if(studentcount>m||arr[i]>mid){
                return false;
            }
            pages=arr[i];
        }
                
    }
    return true;
}
int book(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int e=sum;
    int ans=-1;
    while(e>=s){
        int mid=s+(e-s)/2;
        if(possiblesol(arr,n,m,mid)){
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
    cout<<book(arr,4,2);
    return 0;
}