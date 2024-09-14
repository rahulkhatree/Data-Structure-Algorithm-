#include<iostream>
using namespace std;
int squareroot(int n){
    int s=0;
    int e=n;
    int ans=-1;
    while(e>=s){
        int mid=s+(e-s)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
double perfect(int n,int digits,int integer){
    double factor=1;
    double ans=integer;
    for(int i=0;i<digits;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            
                ans=j;
            }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int ans=squareroot(n);
    cout<<perfect(n,5,ans);
    return 0;
}