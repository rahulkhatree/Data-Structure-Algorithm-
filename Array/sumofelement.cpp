#include<iostream>
using namespace std;
int sumelement(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"sum"<<sumelement(arr,10);
        return 0;
}