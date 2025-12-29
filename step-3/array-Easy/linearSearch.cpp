#include<bits/stdc++.h>
using namespace std;

int linearSeacrh(vector<int> &arr, int num){
    int n = arr.size();
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            return i;
        }
    } return -1;
}

int main(){
 int size;
 cin >> size;
 vector<int> arr(size);
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
 int num;
 cin >> num;
int findIndex = linearSeacrh(arr, num);
 cout << findIndex;
 return 0;
}