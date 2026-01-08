// #include<bits/stdc++.h> 
// using namespace std;

// int main(){
//     string str;
//     cin >> str;

//     // precomputation
//     int hash[26] = {0};
//     for(int i=0; i<str.size(); i++){ 
//         hash[str[i]-'a'] +=1;
//     }

//     int input;
//     cin >> input;

//     while(input--){
//         char ch; 
//         cin >> ch;
        
//         // fetch method :
//         cout << ch << "--> "<< hash[ch-'a'] << endl;
//     }


//     return 0;
// }

#include<bits/stdc++.h> 
using namespace std;

int main(){
    string str;
    cin >> str;

    // precomputation
    int hash[256] = {0};
    for(int i=0; i<str.size(); i++){
        hash[str[i]] +=1;
    }

    int input;
    cin >> input;

    while(input--){
          char ch; 
        cin >> ch;
        
        // fetch method :
        cout << ch << "--> "<< hash[ch] << endl;
    }


    return 0;
}