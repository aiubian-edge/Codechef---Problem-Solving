/******************************************************************************

Problem
Alice buys a toy with a selling price of 100100 rupees. There is a discount of xx percent on the toy. Find the amount Alice needs to pay for it.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains a single integer, xx — the discount on the toy.
Output Format
For each test case, output on a new line the price that Alice needs to pay.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	int t,x,p;
	p=100;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x;
	    cout<<p-((p/100)*x)<<endl;
	}
	// your code goes here
	return 0;
}
