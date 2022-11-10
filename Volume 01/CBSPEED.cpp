// Problem
// In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of XX bits per second above which his calculations are prone to errors. If Chef is currently working at YY bits per second, is he prone to errors?

// If Chef is prone to errors print YES, otherwise print NO.

// Input Format
// The only line of input contains two space separated integers XX and YY — the threshold limit and the rate at which Chef is currently working at.

// Output Format
// If Chef is prone to errors print YES, otherwise print NO.

// You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).

#include <iostream>
using namespace std;

int main() {
	int x,y;
	cin>>x>>y;
	if(x>=1 && x<=100 && x<=100 && x<=100){
	    if(x==y){
	        cout<<"NO";
	    }
	    else if(x>y)
	    {
	        cout<<"NO";
	    }
	    else{
	    cout<<"YES";
	    }
	    
	}// your code goes here
	return 0;
}
