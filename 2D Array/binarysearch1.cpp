#include<iostream>
#include<vector>
using namespace std;
bool searchmatrix(int matrix[][4],int n,int m,int target){
    int row=n;
    int col=m;
    

    int start=0;
    int end=row*col-1;

    while(start<=end){
        int mid=start+(end-start)/2;

        int element = matrix[mid/col][mid%col];
        if(element==target){
            return 1;
        }
        else if(element < target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return 0;
}
int main(){
    int arr[3][4]={1,2,3,4,5,14,34,56,57,67,76,87};
    cout<<searchmatrix(arr,3,4,34);
    return 0;
}