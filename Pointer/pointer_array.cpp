#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,4};
    cout<<"the address of first element is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"the address of first element is"<<&arr[0]<<endl;
    return 0;
}