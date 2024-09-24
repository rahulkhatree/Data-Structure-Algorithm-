#include<iostream>
using namespace std;
int main(){
    int num=5;
    int a=num;
    a++;
    cout<<num<<endl;
    
    int *p=&num;
    (*p)++;
    cout<<num<<endl;



    //copy of pointer
    int *q=p;
    cout<<*q<<endl;
    cout<<q<<endl;
    (*q)++;
    cout<<num<<endl;


    int i=3;
    int *t=&i;
    cout<<"before t "<<t<<endl;
    t=t+1;
    cout<<"after t "<<t<<endl;
    return 0;
}