#include <bits/stdc++.h>
using namespace std;
int countVar = 0; // global variabl
// count is a std library so dont use i t as global variable 
void f(){
    if(countVar ==4) return;
    cout << countVar ;
    countVar ++;
    f();
}

// question 1 : print name 5 times 
void nameWrite(){
    if(countVar==5){
        return;
    }
    cout << "prachi" << endl;
    countVar ++;
    nameWrite();
}
// time complexity o(n) stact space space complexity o(n)
void nameWriteAgain(int num , int n){
    if(num>n){
        return;
    }
    cout << "shubhman" << endl;
    nameWriteAgain(num+1, n);
}

// question 2 : print  1 to n;
void printTillN(int num, int n){
    if(num > n){
        return ;
    }
    cout << num << " ";
    printTillN(num+1, n);
}

// queion 3 : print n to 1
void reverseNumRecurssion(int n){
    if(n==0) return;
    cout << n << " ";
    reverseNumRecurssion(n-1);
}

// question 4 : print linearly from 1 to n ( but by backtracking) use substraction not addition also in increasing order 
void LinearOrder1toN(int num , int n){
    if(n==0) return;
    LinearOrder1toN(num , n-1);
    cout << n << " ";
}
// question 5 : print linearly from n to 1 ( but by backtracking) use addition not substraction also in increasing order 
void LinearOrderNto1(int num , int n){
      if(n==0){
        return ;
    }
        cout << n << " ";
    LinearOrderNto1(num, n-1);
}

int fun(int i , int sum){
    if(i<1){
        cout << sum;
        return 0;
    }
    fun(i-1, sum+i);
}


int fun2(int n){
    if(n==0){
        return 0;
    }
  
    return n + fun2(n-1);
}
// factorial find in recursion
int factN(int n){
    if(n==0){
        return 1;
    }
    return n*factN(n-1);
}

//second way reverse :


int main(){

    nameWrite();
    nameWriteAgain(1,5);

    printTillN(1,30);

     cout << endl;
    reverseNumRecurssion(30);
    cout << endl;

    LinearOrder1toN(1, 30);
    cout << endl;

    LinearOrderNto1(1,30);
    cout << endl;

    fun(3,0);
    cout << endl;

    cout << fun2(10);
    cout << endl;

    cout << factN(4);
    cout << endl;

    // int arr[] = {1,23,43,4};
    // // reverse(arr);
    //   int l = 0;
    // int r = sizeof(arr)/sizeof(arr[0]);
    // // int size = sizeof(arr)/sizeof(arr[0]);
    // // cout << size;
    // reverse(arr,l,r);


    return 0;
} 