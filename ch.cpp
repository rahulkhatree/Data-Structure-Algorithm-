#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='a'&&ch<='z'){
        cout<<"lowercase";
    }
    else if(ch>='A'&&ch<='Z'){
        cout<<"Uppercase";
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"Numbers";
    }
    else{
        cout<<"Symbols";
    }
    return 0;
}