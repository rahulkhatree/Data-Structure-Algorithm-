#include<iostream>
using namespace std;
void reverse(string s){
    int st=0;
    int e=s.length()-1;
    while(e>=st){
        char temp=s[st] ;
        s[st]=s[e];
        s[e]=temp;
        st++;
        e--;
    }
    cout<<s;

}
int main(){
    string s;
    cin>>s;
    reverse(s);
    return 0;
}