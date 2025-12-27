#include <bits/stdc++.h>
using namespace std;

int reverseNum(int i, int arr[], int n)
{
    if (i >= n / 2)
    {
        return 0;
    }

    swap(arr[i], arr[n - i - 1]);
    reverseNum(i + 1, arr, n);
}

// check palindrom logic
int isPalindrome(string str, int size , int i){

    if(i >= size/2
    ){
        return 1;
    }
      if(str[i]!= str[size-i-1]){
    return 0;
  }
  return isPalindrome(str, size, i+1);
}

// multiple recursion call :
// fibonacci series 

int fibonnaci(int n){
    if(n <=1){
    return n;
    }
    int first = fibonnaci(n-1);
    int slast = fibonnaci(n-2);
    return first + slast;
}


int main()
{
    // int size;
    // cin >> size;
    // int arr[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // reverseNum(0, arr, size);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // string str;
    // cin >> str;
    // int n = str.length();
    // if(isPalindrome(str, n, 0)){
    //     cout << " the given string is palindrome";
    // }
    // else{
    //     cout << "not palindrome";
    // }
   cout << fibonnaci(4) << endl;
   cout << fibonnaci(8) << endl;
   cout << fibonnaci(5);


    return 0;
}