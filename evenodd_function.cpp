#include<iostream>
using namespace std;
int comp(){
    int number;
    cin>>number;
    // if(number%2==0){
    //     return 1;
    // }
    // else{
    //     return 0;
    // }


    if(number&1){            //last place of odd is always 1 & even 0; in binary
        return 0;             
    }
    else{
        return 1;
    }
}
int main(){
    if(comp()){
        cout<<"Number is even";
    }
    else{
        cout<<"Number is odd";
    }
    return 0;
}