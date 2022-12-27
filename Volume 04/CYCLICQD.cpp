/******************************************************************************
Cyclic Quadrilateral


https://www.codechef.com/problems/CYCLICQD

Problem
Read problem statements in Mandarin Chinese, Russian, and Vietnamese as well.
You are given the sizes of angles of a simple quadrilateral (in degrees) AA, BB, CC and DD, in some order along its perimeter. Determine whether the quadrilateral is cyclic.

Note: A quadrilateral is cyclic if and only if the sum of opposite angles is 180^{\circ}180 
∘
 .

Input
The first line of the input contains a single integer TT denoting the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains four space-separated integers AA, BB, CC and DD.
Output
Print a single line containing the string "YES" if the given quadrilateral is cyclic or "NO" if it is not (without quotes).

You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a+c==180 && b+d==180){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
