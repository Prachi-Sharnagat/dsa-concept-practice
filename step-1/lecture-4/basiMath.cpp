#include <bits/stdc++.h>
using namespace std;

int countNumber(int n){
    int count = 0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}
// without zero include 
int reverseNumber(int n){
    int lastDigit =0;
    cout << endl << "reverse number : " << " ";
	if(n==0){
		cout << lastDigit;
		return 0;
	}
	else if(n<0){
		n = -n;
	}
	while(n>0){
		lastDigit = lastDigit*10 + n%10;
		n /=10;
	}
	cout << lastDigit;
	return 0;
}

int reverseNumberAgain(int n){
// if -317 the answer should be - 713
}

int checkPalindrome(int n){
	cout << endl;
	int duplicate = n;
 int lastdigit = 0;
 int reverse = 0;
	while (n>0){
	  lastdigit = n%10;
	  n /= 10;
	  reverse = reverse*10 + lastdigit ;
	}
	if(reverse==duplicate){
		cout << "true";
	}
	else {
	cout << "false";
	}

	return 0;
	
}


int armstrong(int n){
	cout << endl;
	int duplicate = n;
 int sum = 0;
	while (n>0){
	int lastdigit = n%10;
	  n /= 10;
	  sum = sum + lastdigit*lastdigit*lastdigit;
	}
	if(sum==duplicate){
		cout << "true";
	}
	else {
	cout << "false";
	} cout << endl;
	return 0;
}

int printDivision(int n){
	for(int i = 1; i<=n ; i++){
		if(n%i == 0){
			cout << i <<", ";
		}
	}
}

int DivisorPrint(int n){
	cout << endl;
	vector<int> ls;
	// 6*6 = 36 true
	// 7*7 < = 36 false
	//  for(int i = 1; i*i <=n ; i++){} means 
	// o(sqrt(n))
	// o(no of factors* log(no of factors))
	// o(nlogn)
	for(int i = 1 ; i<= sqrt(n); i++){
		if(n%i==0){
			ls.push_back(i);
			// cout << i << " ";
				if ((n/i)!=i)
		{
			ls.push_back((n/i));
			// cout << (n/i) <<" ";
		}

		}
	}

	// sort the list 
	    vector<int> v;

	for(auto list: ls){
		v.push_back(list);
	}

	   sort(v.begin(), v.end());

	
//    vector<int>::iterator it = ls.begin();
// o(no of factors)
	for(auto val:v){
		cout << val << " ";
	}
	// total time complexity = 
}

int isPrime(int n)
{ int count = 0;
	cout << endl;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			count ++;
			if((n/i)!=i){
				count++;
			}
		}
	}
	if(count==2){
		cout << n << " is a prime number";
	}
	else{
				cout << n  << " is not a prime number";
	}
	return 0;
}

// gcf/hcf:
int gcd(int a, int b){
	cout << endl;
	while(a>0 && b>0){
		if(a>b) a = a%b;
		else b = b%a;
	}
	if(a==0) return b;
	return a;
}

int main(){
    int n;
    cin >> n;
    // int cnt = countNumber(n);
    // cout << cnt;
	 int a, b;
	 cin >> a >> b;
    // reverseNumber(n);
    // reverseNumberAgain(n);
	// checkPalindrome(n);
	// armstrong(n);
	// printDivision(n);
	// DivisorPrint(n);
	// isPrime(n);
	cout << gcd(a,b);
    return 0;
}