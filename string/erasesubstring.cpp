#include<iostream>
using namespace std;
string removesubstring(string s,string part){
    while(s.length()!=0&&s.find(part)<s.length()){
      s.erase(s.find(part),part.length());
    }
    return s;
}
int main(){
    string s,part;
    cout<<"Enter the string  "<<endl;
    cin>>s;
    cout<<"enter the substring  "<<endl;
    cin>>part;
    cout<<removesubstring(s,part);
    return 0;
}