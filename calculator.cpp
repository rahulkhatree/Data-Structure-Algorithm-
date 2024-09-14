#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"enter the values:";
    cin>>a>>b;
    cout<<"Enter the operator +-*/"<<endl;
    cin>>ch;
    cout<<"the answer is : ";
    switch(ch)
    {
        case '+': cout<<a+b;
        break;
        case '-': cout<<a-b;
        break;
        case '*': cout<<a*b;
        break;
        case '/': cout<<a/b;
        break;
        default: cout<<"invalid operator";
        break;
    }
    return 0;
}