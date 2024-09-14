#include<iostream>
using namespace std;
void intersection(int arr[],int arr1[],int size,int size1){
    for(int i=0;i<size;i++){
        for(int j=0;j<size1;j++){
            if(arr[i]==arr1[j]){
                cout<<arr[i]<<" ";
               arr1[j]=INT32_MIN;
               break;
            }
        }
    }
}
int main(){
    int arr[9]={5,4,2,1,4,5,3,2,3};
    int arr1[5]={6,2,7,1,4};
    intersection(arr,arr1,9,5);
    return 0;
}