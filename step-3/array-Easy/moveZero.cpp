#include<bits/stdc++.h>
using namespace std;

void moveZeroOptimise(vector<int> &arr, int n ){
   int j = -1;
   for(int i=0; i<n; i++){
    if(arr[i]==0){
        j = i;
        break;
    }
   }
    if(j==-1){ return; }
   for(int i=j+1; i<n; i++){
    if(arr[i]!=0){
        swap(arr[j], arr[i]);
        j++;
    }
   }


}
// time complexity -> o(n)
// space complexity -> o(x) here x is no of non- zeros
void moveZero(vector<int> &arr, int n ){
    vector<int> temp;
    int count =0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
        else{
            count++;
        }
    }
    for(int i=0; i<n-count; i++){
        arr[i]= temp[i];
    }
    for(int i=n-count ; i<n; i++){
        arr[i] = 0;
    }

}

int main(){
 int size;
 cin >> size;
 vector<int> arr(size);
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }

 moveZeroOptimise(arr,size);

for(int i=0; i<size; i++){
    cout << arr[i] << " ";
 }

 return 0;
}