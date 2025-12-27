#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(int arr[], int size){
set<int> st;
for(int i=0; i<size; i++){
    st.insert(arr[i]);
   }
   int count=0;
for( int x:st){
        cout << x << " ";
        count ++;
     }
     cout << endl;
     return count;
     
}

// works on sorted array only not on unsorted array

int removeDuplicatedOptimise(int arr[], int size){
   int i = 0;
   for(int j=1; j<size; j++){
    if(arr[i]!=arr[j]){
        arr[i+1] = arr[j];
        i++;
    }
   }
    return i+1;
}


int main(){
 int size;
 cin >> size;
 int arr[size];
 for(int i=0; i<size; i++){
    cin >> arr[i];
 }
// int noOfUniqueElement = removeDuplicate(arr,size);
// cout << "no of unique element : " << noOfUniqueElement;
int noOfUniqueElement = removeDuplicatedOptimise(arr,size);
cout << "no of unique element : " << noOfUniqueElement << endl;
for(int i=0; i<noOfUniqueElement; i++){
    cout << arr[i] << " ";
}

 return 0;
}