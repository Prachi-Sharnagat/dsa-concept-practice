// * basics structure
// #include <iostream>
// using namespace std;
// int main() {
//     int x, y;
//     cout << "hello world\n"<<"hey prachi"<<endl;
//     cin >> x;
//     cout << "value: " << x << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int x, y;
//     cout << "hello world\n"<<"hey prachi"<<endl;
//     cin >> x;
//     cout << "value: " << x << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int x,y;
//     cin>>x >> y;
//     cout<<"value of x = "<<x << y<<endl;
// }

// TODO: bits/stdc++.h --> it includes all library

//  #include<bits/stdc++.h>
//  using namespace std;
//  int main(){
//     long long x = 10;
//     cout<< sizeof(x)<<"\n";
//      float y = 120.3;
//      cout<<y<<"\n";
//     double p = 34;
//     cout<<p;
//     return 0;
//  }

// ! string :

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string s;
//     cin >> s;
//     cout<< s;
//     string y;
//     cout<<y;
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // string s;
//     // string y;
//     // cin >> s ;
//     // cin >> y;
//     // cout << s <<" " << y<<endl;
//     string str;
//     getline(cin,str);
//     cout<<str;
//     return 0;
// }

//* if-else statement

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int age;
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << " you are an adult!";
//     }
//     else if(age< 10){
//         cout << "you are young";
//     }    
//     // if we put 15 then nothing will going to print  : empty 
// }
   
// ? question if-else:
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int marks;
//     cout << "enter your maks :";
//     cin >> marks;
//     if(marks >= 80 && marks <= 100){
//         cout << "A";
//     }
//     else if(marks >= 60){
//         cout << "B";
//     }
//     else if(marks >= 50){
//         cout << "C";
//     }else if(marks >= 46){
//         cout << "D";
//     }else if(marks >= 25){
//         cout << "E";
//     }
//     else{
//         cout << "F";
//     }
//     return 0;
// }

// TODO : nested if else question 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int age;
//     cin >> age;
//     if(age<18){
//         cout << "not eligible for job";
//     }
//     else if(age <= 57){
//         cout << "eligible for job";
//         if(age >= 55){
//              cout << ", but retirement soon.";
//         }
//     }
//     else{
//         cout << "retirement time";
//     }

//     return 0;
// }

// ? switch :

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int day;
//     cin >> day;
//     switch(day){
//         case 1 :
//           cout << "monday";
//         break;
//         case 2 :
//           cout << "tuesday";
//         break;
//         case 3:
//           cout << "wed";
//         break;
//         case 4 :
//           cout << "thur";
//         break;
//            case 5 :
//           cout << "fri";
//         break;
//            case 6 :  
//           cout << "sat";
//         break;
//            case 7 :
//           cout << "sun";
//         break;
//         default :
//         cout <<"invalide";

//     }
//     cout << "check";
//     return 0;
// }

//! Array :

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int arr[5];
//   cin >> arr[0] >> arr[1] >> arr[2];
//   cout << arr[2] << "\n";
//   cout << arr[5] << "\n";
//   arr[1]+=10;
//   cout << arr[1] <<endl;
//   int array[3][5];
//   cin >> array[0][2];
//   cout << array[1][2];

//   return 0;  
// }   

// todo : loops 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int i ;
//   for(i=1; i<=29; i++){
//     cout << "prachi" << i << endl;
//   }
//   cout << i;

//   int j=14;
//   while(j>=10){
//     cout << j << "\n";
//     j--;
//   }
//   cout << "\n"<< j << endl;
//   do{
//  cout << "hello ji " << "\n";
//  j--;
//   }while(j>=8);

//   return 0;
// }

//* Functions :


// #include<bits/stdc++.h>
// using namespace std;
// void greet(string name){
//   cout << "hello prachi!";
//   cout << name;
// }
// int main(){
//   string name1, name2;
//   cin >> name1;
//   cin >> name2;
//   greet(name1);
//   greet(name2);
//   return 0;
// }

// ? sum of two number

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int a, int b){
//   return a+b;
// }
// int max(int a , int b){
//   if(a>=b) return a;
//   else return b;
// }
// int main(){
//   int first, second;
//   cin >> first >> second;
//   cout << sum(first,second) << endl;
//   int maxm = max(first,second);
//   int minm = min(first,second);
//   cout << minm  <<" "<< maxm << endl;
//   cout << max(first,second);
//   return 0;
// }

//! function(pass by reference and value)

// * function(pass by value : copy send not original)

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int a, int b){
//    a+=10;
//    return a+b;
// }
// void change(string s){
//   s[0] ='c';
//   cout << s;
// }
// int main(){
//   int first, second;
//   cin >> first >> second;
//   cout << sum(first,second) << endl;
//   cout << first <<"\n" << second;

//   string s="prachu";
//   change(s);
//   cout << s;
//   return 0;
// }

// * function(pass by reference : original address use & )

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int &a, int &b){
//    a+=10;
//    return a+b;
// }
// void change(string &s){
//   s[0] ='c';
//   cout << s;
// }
// int main(){
//   int first, second;
//   cin >> first >> second;
//   cout << sum(first,second) << endl;
//   cout << first <<"\n" << second;

// //   string s="prachu";
// //   change(s);
// //   cout << s;
//   return 0;
// }

