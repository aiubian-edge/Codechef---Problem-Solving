/******************************************************************************
Problem
Chef has XX 5 rupee coins and YY 10 rupee coins. Chef goes to a shop to buy chocolates for Chefina where each chocolate costs ZZ rupees. Find the maximum number of chocolates that Chef can buy for Chefina.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains three integers XX, YY and ZZ — the number of 5 rupee coins, the number of 10 rupee coins and the cost of each chocolate.
Output Format
For each test case, output the maximum number of chocolates that Chef can buy for Chefina.
*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	for(int i=0; i<t; i++){
	    cin>>x>>y>>z;
	    cout<<(x*5+y*10)/z<<endl;
	}
	// your code goes here
	return 0;
}
