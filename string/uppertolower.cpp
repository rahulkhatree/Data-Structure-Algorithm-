#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        ch=ch-'A'+'a';
    }
    return ch;
}
char touppercase(char ch){
    if(ch>='A'&&ch<='Z'){
        return ch;
    }
    else{
        ch=ch-'a'+'A';
    }
    return ch;
}
int main(){
    // char name[20];
    cout<<"character is "<<touppercase('a')<<endl;;
    cout<<"character is "<<tolowercase('D');
}