#include<iostream>
#include<algorithm>
using namespace std;
void pairsum(int arr[],int size){
    int sum;
    cin>>sum;
    // sort(begin(arr),end(arr));
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==sum){
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
int main(){
int arr[5]={1,2,3,4,5};
pairsum(arr,5);
return 0;
}