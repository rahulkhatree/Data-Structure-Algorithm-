#include<iostream>
using namespace std;
int getlength(char name[]){
    int i=0;
    for(;name[i] != '\0';i++){
        
    }
    return i;
} 
char tolowercase(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        ch=ch-'A'+'a';
    }
    return ch;
}
void reverse(char name[]){
    int s=0;
    int e=getlength(name)-1;
    while(e>=s){
        char temp=name[s];
        name[s]=name[e];
        name[e]=temp;
        e--;
        s++;
    }
    cout<<name;
}
bool palindrome(char name[]){
    int s=0;
    int e=getlength(name)-1;
    while(e>=s){
    //     if(name[e]==name[s]){
    //         s++;
    //         e--;
    //     }
    //     else{
    //         return false;
    //     }
    // }
     if(tolowercase(name[e])==tolowercase(name[s])){
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    char name[20];
    cin>>name;
    // cout<<getlength(name);
    // reverse(name);
    if(palindrome(name)){
        cout<<"It is Palindrome string ";
    }
    else{
        cout<<"It is not a Palindrome string";

    }

    return 0;
}