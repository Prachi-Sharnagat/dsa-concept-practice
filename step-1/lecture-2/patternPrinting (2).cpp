#include <bits/stdc++.h>
using namespace std;

// ? test case means
/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int i = 0 ; i<t ; i++){
        int n;
        cin >> n;
        print1(n);
    }
}
*/

/*
 * * * *
 * * * *
 * * * *
 * * * *
 */

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
/*
 *
 * *
 * * *
 * * * *
 */
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
/*
1
1 2
1 2 3
*/
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
/*
1
2 2
3 3 3
*/

void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

/*
 * * *
 * *
 *
 */

void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}

/*
1 2 3
1 2
1
*/
void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
 *
 ***
 *****
 */
void print7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {

            cout << "*";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
/*
*****
***
*
*/

void print8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
/*
 *
 ***
 *****
 *****
 ***
 *
 */

void print9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= n - i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

/*
1
0 1
1 0 1
*/

void print10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1" << " ";
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }
}

/*
A B C
A B
A
*/

void print11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << char(65 + j) << " ";
        }
        cout << endl;
    }
}

/*

*
**
***
****
***
**
*

*/
void print12(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= 2 * n - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
}

/*
1      1
12    21
123  321
12344321
*/

void print13(int n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        // reverse number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
/*
1
2 3
4 5 6
7 8 9 10
*/

void print14(int n)
{
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num += 1;
        }
        cout << endl;
    }
}

/*
A
A B
A B C
A B C D
*/

void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
/*
A B C D
A B C
A B
A
*/

void print16(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
/*
A
B B
C C C
D D D D
*/
void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
/*
---A---
--ABA--
-ABCBA-
ABCDCBA
*/
void print18(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        // char
        char ch = 'A';
        int breakPoint = (2 * i + 1) / 2;

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakPoint)
                ch++;
            else
                ch--;
        }
        // space
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
/*
D
D C
D C B
D C B A
*/

void print19(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - i - 1;
        int breakpoint = n - i;
        for (int j = 0; j <= i; j++)
        {
            cout << char(ch + i) << " ";
            ch--;
        }
        cout << endl;
    }
}

/*
D
C D
B C D
A B C D
*/
void print20(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - i - 1;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
/*

*      *
**    **
***  ***
********
***  ***
**    **
*      *

*/

void print21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        int space = (2 * n - 2 * i);
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        int space = 2 * i;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int j = n - i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
********
***  ***
**    **
*      *
*      *
**    **
***  ***
********

*/
void print22(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << "*";
        }
        int space = 2 * i - 2;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
        for (int j = n - i + 1; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }

     for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        int space = 2 *n - 2*i;
        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }
         for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
/*
****
*  *
*  *
****

*/
void print23(int n)
{
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1|| j==n){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
// snake question i need to solve
void print24(int n){
   
    for(int i=1; i<=n; i++){
         int count = 1; 
        for(int j=1; j<=n; j++){
            if(i%2!=0){
                    cout << "*";
            }
            else{ 
                   if(i%2!=0){
                 cout << "-";
                   } 
                   else{
                        cout << "-";
                   }
                   }
            } if(count%2==0){
                
            }
            
            cout << endl;
        }
    }

int main()
{
    int n;
    cin >> n;
    print24(n);
    return 0;
}