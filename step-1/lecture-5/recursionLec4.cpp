#include<bits/stdc++.h>
using namespace std;

int reverseNum(int i, int size, int arr[]){
    if(i >= size/2){
        return 0;
    }
    swap(arr[i], arr[size-i-1]);
     reverseNum(i+1,size,arr);
}




int main(){
    int size;
    cin >> size;
    int arr[size];
    int i = 0;
    for( i=0; i<size; i++){
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;
    reverseNum(0,size,arr);
     for( i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;

}
