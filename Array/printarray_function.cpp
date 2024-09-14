#include<iostream>
using namespace std;
void printarray(int arr[],int size){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int first[10]={2,3,4,5,6,1,2,3,4,5};
    printarray(first,10);

    cout<<endl;

    int firstsize=sizeof(first)/sizeof(int);
    cout<<"size of first array: "<<firstsize<<endl;
}