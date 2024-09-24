#include<iostream>
#include<vector>
using namespace std;
int valid(char ch){
    if((ch>='a'&&ch<='z' || ch>='A'&&ch<='Z' || ch>='0'&&ch<='9')){
        return 1;
    }
    return 0;
}
char tolowercase(char ch){
    if(ch>='a'&&ch<='z' || ch>='0'&&ch<='9'){
    }
    else{
        ch=ch-'A'+'a';
    }
    return ch;
}
bool checkpalindrome(string a){
    int s=0;
    int e=a.size()-1;
    while(e>=s){
        if(tolowercase(a[s])==tolowercase(a[e])){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
void ispalindrome(string s){
   string temp="";
   for(int i=0;i<s.size();i++){
     if(valid(s[i])){
        temp.push_back(s[i]);
     }
   }

   for(int i=0;i<temp.size();i++){
    temp[i]=tolowercase(temp[i]);
   }

   if(checkpalindrome(temp)){
    cout<<"Palindrome";
   }
   else{
    cout<<"Not a Palindrome";
   }

}
int main(){
    string s;
     cin>>s;
     ispalindrome(s);
     return 0;
    
}