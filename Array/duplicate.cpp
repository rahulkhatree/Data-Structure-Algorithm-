#include<iostream>
using namespace std;
int duplicate(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }
        }
    }
}
int main(){
    int arr[5]={2,3,1,4,3};
    cout<<duplicate(arr,5);
    return 0;
}