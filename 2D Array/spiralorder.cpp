#include<iostream>
#include<vector>
using namespace std;
void spiralorder(vector<vector <int>> v){
     vector<int> ans;
     int row=v.size();
     int col=v[0].size();
     int count=0;
     int total=row*col;

     //index initialization

     int sr=0;  //starting row
     int sc=0;  //starting column
     int er=row-1;  //ending row
     int ec=col-1;  //ending column

     while(count<total){

        //printing starting row
        for(int index=sc;count<total&&index<=ec;index++){
            ans.push_back(v[sr][index]);
            count++;
        } 
        sr++;
        //printing ending column
        for(int index=sr;count<total&&index<=er;index++){
            ans.push_back(v[index][ec]);
            count++;
        } 
        ec--;
        //printing ending row;
        for(int index=ec;count<total&&index>=sc;index--){
            ans.push_back(v[er][index]);
            count++;
        } 
        er--;

        //printing starting column

        for(int index=er;count<total&&index>=sr;index--){
            ans.push_back(v[index][sc]);
            count++;
        } 
        sc++;
     }
      for(int i=0;i<ans.size();i++){
        cout<<ans[i];
      }
} 

int main(){
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9}};
    spiralorder(v);
    return 0;

}