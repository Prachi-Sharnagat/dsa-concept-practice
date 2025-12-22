#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int size){
    int didSwap = 0;
  for(int i=0; i<=size-1; i++){
    for(int j=0 ; j<=size-i-1; j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
     if(didSwap=1){
            return ;
        } // if already sorted order given then tc ==> o(1)
  }
  return ;
}

int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
 bubbleSort(arr,size);
 // after sorting 
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
 }
 return 0;
}