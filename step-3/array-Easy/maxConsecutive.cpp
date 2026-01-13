#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> &arr){
  int maxi = 0;
  int cnt = 0;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]==1){
            cnt ++;
            maxi = max(maxi, cnt);
        }
        else{
            cnt = 0;
        }
    }
  return maxi;
}

int main(){
    int size;
    cin >> size;
 vector<int> arr(size);
 for(int i=0; i<size; i++){
    cin >> arr[i] ;
 }

//  int missing = FindingMissingNum_Optimise1(arr);
//  int missing = FindingMissingNum_usingHashing(arr);
 int maxOnes = maxConsecutiveOnes(arr);
 cout << maxOnes;
 return 0;
}