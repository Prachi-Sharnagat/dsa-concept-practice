#include<bits/stdc++.h> 
using namespace std;
int hashh[10000000] = {0};

int main(){
    int size;
    cin >> size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    // precompute
    // int hash[13] = {0};

    for(int i=0; i<size; i++){
        hashh[arr[i]] +=1;
    }

    int input;
    cin >> input;

    while(input--){
        int number ; 
        cin >> number;
        
        // fetch method :
        cout << number << "--> "<< hashh[number] << endl;
    }


    return 0;
}