#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int count = 1;
    while(i<30)
    {
        if(n/pow(2,i)==1){
            count =0;
            break;
        }
        i++;
    }
    if(count==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}