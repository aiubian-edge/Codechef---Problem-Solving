/******************************************************************************

Problem
It's the sale season again and Chef bought items worth a total of XX rupees. The sale season offer is as follows:

if X \le 100X≤100, no discount.
if 100 \lt X \le 1000100<X≤1000, discount is 2525 rupees.
if 1000 \lt X \le 50001000<X≤5000, discount is 100100 rupees.
if X \gt 5000X>5000, discount is 500500 rupees.
Find the final amount Chef needs to pay for his shopping.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of single line of input containing an integer XX.
Output Format
For each test case, output on a new line the final amount Chef needs to pay for his shopping.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    int x;
	    cin>>x;
	    if(x<=100){
	        cout<<x<<endl;
	    }
	    else if(x<=1000 && x>100){
	        cout<<x-25<<endl;
	    }
	    else if(x<=5000 && x>1000){
	        cout<<x-100<<endl;
	    }
	    else{
	        cout<<x-500<<endl;
	    }
	}
	// your code goes here
	return 0;
}

