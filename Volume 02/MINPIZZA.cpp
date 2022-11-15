/******************************************************************************

Problem
Each pizza consists of 44 slices. There are NN friends and each friend needs exactly XX slices.

Find the minimum number of pizzas they should order to satisfy their appetite.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two integers NN and XX, the number of friends and the number of slices each friend wants respectively.
Output Format
For each test case, output the minimum number of pizzas required.

*******************************************************************************/


#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	    float n,x;
	    cin>>n>>x;
	    int c=ceil((n*x)/4);
	    cout<<c<<endl;
	    
	}
	// your code goes here
	return 0;
}

