#include<iostream>
using namespace std;
bool searchmatrix(int arr[][5],int n,int m,int target){
    int row=n;
    int col=m;
    int rowIndex=0;
    int colIndex=col-1;
    while(rowIndex<row && colIndex>=0){
        int element = arr[rowIndex][colIndex];
        if(element==target){
          return 1;
        }

        if(element<target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }

    return 0;
}
int main(){
    int arr[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};

    cout<<searchmatrix(arr,5,5,26);
}