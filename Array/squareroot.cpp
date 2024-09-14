#include<iostream>
using namespace std;
int binarysearch(int n){
    int start=0;
    int end=n ;
    int ans=-1;
    while(end>=start){
        int mid=start+(end-start)/2;
        if((mid*mid)==n){
            return mid;
        }
        else if(mid*mid>n){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}
int main(){
    cout<<binarysearch(10000000000);
    return 0;
}