#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int size){
 

  
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