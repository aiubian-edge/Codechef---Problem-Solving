/******************************************************************************

Problem
A geyser has a capacity of XX litres of water and a bucket has a capacity of YY litres of water.

One person requires exactly 22 buckets of water to take a bath. Find the maximum number of people that can take bath using water from one completely filled geyser..

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers X, YX,Y.
Output Format
For each test case, output the maximum number of people that can take bath.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float x,y;
        cin>>x>>y;
        float r=2*y;
        if(x>=r){
            cout<<floor(x/r)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	// your code goes here
	return 0;
}
