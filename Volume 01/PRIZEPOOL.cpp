// Problem
// In a coding contest, there are prizes for the top rankers. The prize scheme is as follows:

// Top 1010 participants receive rupees XX each.
// Participants with rank 1111 to 100100 (both inclusive) receive rupees YY each.
// Find the total prize money over all the contestants.

// Input Format
// First line will contain TT, number of test cases. Then the test cases follow.
// Each test case contains of a single line of input, two integers XX and YY - the prize for top 1010 rankers and the prize for ranks 1111 to 100100 respectively.
// Output Format
// For each test case, output the total prize money over all the contestants.

#include <iostream>
using namespace std;

int main() {
	int t,x,y;
	cin>>t;
	if(t>=1 && t<=1000){
	for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x>=1 && x<=1000 && y>=1 && y<=1000 && y<=x){
        cout<<x*10+y*90<<endl;
    }
    else{
    cout<<"Constrains are not matching!";
    }
    }
    }
    else{
    cout<<"Constrains are not matching!";
    }
	// your code goes here
	return 0;
}