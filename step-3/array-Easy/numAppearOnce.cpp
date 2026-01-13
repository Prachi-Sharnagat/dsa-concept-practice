#include<bits/stdc++.h>
using namespace std;
int numAppearOnce_brute(vector<int> &arr){
    int n= arr.size();
    for(int i=0; i<n; i++){
        int num = arr[i];
        int count = 0;
        for(int j = 0; j<n; j++){
            if(num == arr[j]){
                count ++;
            }
        } 
        if(count==1) return num;
    }
}

int numApppearOnce_better(vector<int> &arr){
    int n = arr.size();
    int maxi = arr[0];
    for(int i=0; i<n; i++){
        maxi =  max(maxi, arr[i]);
    }   
    int hash[maxi+1] ={0};

    for(int i=0; i<n; i++){
        hash[arr[i]] ++;
        }
    for(int i=0; i<maxi; i++){
        if(hash[arr[i]]==1){
            return arr[i];
        }
    }
}



int numApppearOnce_optimise1(vector<int> &arr){
    int n = arr.size();
    map<long long, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }   
    for(auto it:mpp){
        if(it.second==1){
            return it.first;
        }
    }
}

int numApppearOnce_optimise2(vector<int> &arr){
    int n = arr.size();
    // xor method 
    int xor1 = 0;
    for(int i=0; i<n; i++){
        xor1 ^= arr[i];
    }
    return xor1;
}



int main(){
    int size;
    cin >> size;
 vector<int> arr(size);
 for(int i=0; i<size; i++){
    cin >> arr[i] ;
 }
//  int appearOnce = numApppearOnce_optimise1(arr);
 int appearOnce = numApppearOnce_optimise2(arr);
 cout << appearOnce;
 return 0;
}