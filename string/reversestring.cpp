#include<iostream>
using namespace std;
int getlength(char name[]){
    int i=0;
    for(;name[i] != '\0';i++){
        
    }
    return i;
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

int main(){
    char name[20];
    cin>>name;
    // cout<<getlength(name);
    reverse(name);

    return 0;
}