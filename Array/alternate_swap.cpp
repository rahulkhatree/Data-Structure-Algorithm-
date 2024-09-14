#include<iostream>
using namespace std;
void swap(int arr[],int size){
   //   if(size%2==0){
   //      for(int i=0;i<size;){
   //      int temp=arr[i];
   //      arr[i]=arr[i+1];
   //      arr[i+1]=temp;
   //      i=i+2;
   //   }
   //   }
   //   else{
   //      for(int i=0;i<size-1;){
   //      int temp=arr[i];
   //      arr[i]=arr[i+1];
   //      arr[i+1]=temp;
   //      i=i+2;
   //   }
   //   }
   //   for(int i=0;i<size;i++){
   //      cout<<arr[i]<<" ";
   //   }


   for(int i=0;i<size;i+=2){
      if(i+1<size){
         swap(arr[i],arr[i+1]);
      }
   }
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }
}
int main(){
    int arr[11]={1,2,3,4,5,6,7,8,9,10,11};
    swap(arr,11);
    return 0;
}