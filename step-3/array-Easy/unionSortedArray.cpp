#include<bits/stdc++.h>
using namespace std;


void unionSortedOptimise(vector<int> &arr1, vector<int> &arr2){

    
}

void unionSorted(vector<int> &arr1, vector<int> &arr2){
int n1 = arr1.size();
int n2 = arr2.size();
set<int> st;
    for(int i=0; i<n1; i++){
                st.insert(arr1[i]);
    }

    for(int i =0; i<n2; i++){
        st.insert(arr2[i]);
    }

    for(int x:st){
        cout << x << " ";
    }


}

int main(){
 int size1, size2;
 cin >> size1 >> size2;
 vector<int> arr1(size1);
 vector<int> arr2(size2);
 for(int i=0; i<size1; i++){
    cin >> arr1[i];
 }
  for(int i=0; i<size2; i++){
    cin >> arr2[i];
 }
 unionSorted(arr1, arr2);
 
 return 0;
}