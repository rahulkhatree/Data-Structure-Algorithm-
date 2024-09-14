#include<iostream>
using namespace std;
int main(){
    int i=1,k=1;
    while(i<=4){
        int j=1;
        while(j<=4){
            cout<<k;
            k=k+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}