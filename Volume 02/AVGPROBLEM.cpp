/******************************************************************************
Problem
You are given 33 numbers A, B,A,B, and CC.

Determine whether the average of AA and BB is strictly greater than CC or not?

NOTE: Average of AA and BB is defined as \frac{(A+B)}{2} 
2
(A+B)
​
 . For example, average of 55 and 99 is 77, average of 55 and 88 is 6.56.5.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of 33 integers A, B,A,B, and CC.
Output Format
For each test case, output YES if average of AA and BB is strictly greater than CC, NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	int t;
	float a,b,c;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>a>>b>>c;
	    if((a+b)/2>c){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	// your code goes here
	return 0;
}

