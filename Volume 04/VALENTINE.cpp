/******************************************************************************
Valentine is Coming

Problem
Valentine's Day is approaching and thus Chef wants to buy some chocolates for someone special.

Chef has a total of XX rupees and one chocolate costs YY rupees. What is the maximum number of chocolates Chef can buy?

Input Format
First line will contain TT, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers X, YX,Y - the amount Chef has and the cost of one chocolate respectively.
Output Format
For each test case, output the maximum number of chocolates Chef can buy.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        cout<<x/y<<endl;
    }
	// your code goes here
	return 0;
}
