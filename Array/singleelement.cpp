#include<iostream>
using namespace std;
int singleelement(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
          ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={1,4,2,2,1};
    cout<<singleelement(arr,5);
    return 0;
}

