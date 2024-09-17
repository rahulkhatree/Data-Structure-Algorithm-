#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Rahul");
    q.push("Khatri");
    q.push("Tushar");
    cout<<"size before pop "<<q.size()<<endl;
    cout<<"First element "<<q.front()<<endl;
    q.pop();
    cout<<"first element  "<<q.front()<<endl;  
    cout<<"last element  "<<q.back()<<endl;

    cout<<"size after pop  "<<q.size()<<endl;
    
    return 0;
}