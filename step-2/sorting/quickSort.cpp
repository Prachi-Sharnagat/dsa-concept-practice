#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
     int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
 while(arr[i]<=pivot && i<=high){
        i++;
    }
    while(arr[j]>pivot && j>=low){
        j--;
    }

    if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
   
}

void quickSort(int arr[], int low , int high){
  int pivot = arr[low];
  int i = low;
  int j = high;
  if(low<high){
    int pindex = partition(arr,low,high);
    quickSort(arr,low, pindex-1);
    quickSort(arr,pindex+1, high);
  }
 }


int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
 quickSort(arr,0, size-1);
 // after sorting 
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
 }
 return 0;
}