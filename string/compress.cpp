#include<iostream>
using namespace std;
string compress(string s){
    int i=0;
    int ansIndex=0;
    int n=s.size();
    while(i<n){
        int j=i+1;
        while(j<n && s[i]==s[j]){
            j++;
        }
      s[ansIndex++]=s[i];
      int count=j-i;
      if(count>1){
        string cnt=to_string(count);
        for(char ch:cnt){
            s[ansIndex++]=ch;
        }
      }
      i=j;
    }
    return s;
}
int main(){
    string s;
    cin>>s;
    // s[2]='a';
    cout<<compress(s);
    return 0;
}