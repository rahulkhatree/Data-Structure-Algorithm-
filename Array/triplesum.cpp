#include<iostream>
using namespace std;
void triplesum(int arr[],int n){
    int sum;
    cin>>sum;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    triplesum(arr,10);
    return 0;
}