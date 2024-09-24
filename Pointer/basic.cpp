#include<iostream>
using namespace std;
int main(){
    int num=5;

    // cout<<num<<endl;

    //address of operator-- &
    // cout<<"address of num "<<&num<<endl;

    // //initialise poiner by * with address
    int *ptr=&num;

    cout<<"value is  "<<*ptr<<endl;

    cout<<"address of num  "<<ptr<<endl;

    double d=4.3;
    double *p2=&d;


    // cout<<"address is  "<<p2<<endl;
    // cout<<"value is "<<*p2<<endl;

    cout<<"size of integer is "<<sizeof(&num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is "<<sizeof(p2)<<endl;

    //initialise in many form
    int i=5;
    int *p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;

    
    int *p1=0;
      p1=&i;
    cout<<p1<<endl;
    cout<<*p1<<endl;



    return 0;
}