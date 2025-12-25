#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
  
  for(int i=1; i<size; i++){
    int j = i;
    // if already sorted this will never run tc = o(n) in best case 
    while(j>0 && arr[j-1]>arr[j]){
      swap(arr[j-1], arr[j]);
      j--;
    }
  } 
  return;

}

int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
 insertionSort(arr,size);
 // after sorting 
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
 }
 return 0;
}