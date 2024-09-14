#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int size;
    cin>>size;
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    int key;
    cin>>key;
    if(search(arr,size,key)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}