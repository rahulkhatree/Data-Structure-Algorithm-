#include<iostream>
using namespace std;
int getmax(int num[],int n){
    int max= INT32_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    return max;
}
int getmin(int num[],int size){
    int min=INT32_MAX;
    for(int i=0;i<size;i++){
        if(min>num[i]){
            min=num[i];
        }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"minimum value: "<<getmin(num,size)<<endl;
    cout<<"Maximum value: "<<getmax(num,size)<<endl;

    return 0;
}