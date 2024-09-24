#include<iostream>
#include<array>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m){
    int j=0,k=0,i=0;
    // while(j<n && k<m){
    //     if(arr1[j]>arr2[k]){
    //         arr3[i]=arr2[k];
    //         k++;
    //         i++;
    //     }
    //     else{
    //         arr3[i]=arr1[j];
    //         j++;
    //         i++;
    //     }
    // }
    // while(j<n){
    //     arr3[i]=arr1[j];
    //     i++;
    //     j++;
    // }
    // while(k<m){
    //     arr3[i]=arr2[k];
    //     k++;
    //     i++;
    // }

    while(i<n){
        if(arr1[i]>=arr2[j]){
            arr1[i]=arr2[j];
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n+m;i++){
        cout<<arr1[i]<<" ";
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};
    int arr3[8]={};
    merge(arr1,5,arr2,3);
    return 0;
}