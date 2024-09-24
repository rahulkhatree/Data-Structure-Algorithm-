#include<iostream>
using namespace std;
char getmaxocccharacter(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
      char ch=s[i];
      int number=0;
      number=ch-'a';
      arr[number]++;

    }
    int ans=0;
     int maxi=-1;
    for(int i=0;i<26;i++){
       
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char chh='a'+ans;
    return chh;
}
int main(){
    string s;
    cin>>s;
    cout<<getmaxocccharacter(s);
    return 0;
}