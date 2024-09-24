#include<iostream>
using namespace std;
int largestsumrow(int arr[][3],int n,int m){
    int maxi=INT32_MIN;
     int RowIndex=-1;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=arr[i][j];
        }
        if(maxi<sum){
            maxi=sum;
            RowIndex=i;
        }
    }
    cout<<"Maximum sum  "<<maxi<<endl;;
    return RowIndex;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int ansIndex=largestsumrow(arr,3,3);
    cout<<"max row is at index  "<<ansIndex;
    return 0;
}