// Problem
// Chef wants to conduct a lecture for which he needs to set up an online meeting of exactly XX minutes.

// The meeting platform supports a meeting of maximum 3030 minutes without subscription and a meeting of unlimited duration with subscription.

// Determine whether Chef needs to take a subscription or not for setting up the meet.

// Input Format
// First line will contain TT, the number of test cases. Then the test cases follow.
// Each test case contains a single integer XX - denoting the duration of the lecture.
// Output Format
// For each test case, print in a single line, YES if Chef needs to take the subscription, otherwise print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	if(t>=1 && t<=100){
	for(int i=0; i<t; i++){
	    cin>>x;
	    if(x>=1 & x<=100)
	    {
	        if(x<=30){
	            cout<<"NO"<<endl;
	        }
	        else if(x>30){
	              cout<<"YES"<<endl;
	        }
	    }
	    else{
            cout<<"Constrains are not matching!";
        }
	}
	}
	else{
    cout<<"Constrains are not matching!";
    }// your code goes here
	return 0;
}
