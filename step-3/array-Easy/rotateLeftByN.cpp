#include<bits/stdc++.h>
using namespace std;

void rotateLeftByN(int arr[], int size, int d){
    d = d%size;
    vector<int> temp;
    for(int i=0; i<d; i++){
        temp.push_back(arr[i]);
    }
    for(int i = d ; i<size; i++){
        arr[i-d] = arr[i]; 
    }
    // int j =0;
    // for(int i = size - d; i<size; i++){
    //     arr[i] = temp[j];
    //     j++;
    // }
    // without variable j we can use : 
    for(int i = size - d; i<size; i++){
        arr[i] = temp[i-(size-d)];
    }
}

//  optimal approach :

void rotateLeftByNOptimal(int arr[], int size, int d){
    d = d%size;
    reverse(arr,arr+d);
    reverse(arr+d, arr+size);
    reverse(arr,arr+size);
}

int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }

 int n;
 cout << "rotate array by : ";
 cin >> n;
//  rotateLeftByN(arr,size,n);
 rotateLeftByNOptimal(arr,size,n);

for(int i=0; i<size; i++){
    cout << arr[i] << " ";
 }

 return 0;
}