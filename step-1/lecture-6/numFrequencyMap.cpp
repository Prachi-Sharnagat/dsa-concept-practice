#include<bits/stdc++.h> 
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  // time complexity of map -> logN
  map<int,int> mpp;
  for(int i=0; i<n; i++){
    cin >> arr[i];
    mpp[arr[i]]++;
  }
  
  for(auto it:mpp){
    cout << it.first << "->" << it.second << endl;
  }

  int input;
  cin >> input;
  while(input--){
    int num ;
    cin >> num;
    // fatch 
    cout << num << " -> " << mpp[num] << endl;
  }
    return 0;
}