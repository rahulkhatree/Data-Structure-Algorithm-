#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"sum of element in array: "<<sum(arr,size)<<endl;
    return 0;
}