// Problem
// Chef has recently started playing chess, and wants to play as many games as possible.

// He calculated that playing one game of chess takes at least 2020 minutes of his time.

// Chef has NN hours of free time. What is the maximum number of complete chess games he can play in that time?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of a single line containing a single integer, NN.
// Output Format
// For each test case, output on a new line the maximum number of complete chess games Chef can play in NN hours.

#include <iostream>
using namespace std;

int main() {
	int t,x;
	cin>>t;
	if(t>=1 && t<=10){
	for(int i=0;i<t;i++){
        cin>>x;
        if(x>=1 && x<=10){
        cout<<x*3<<endl;
    }else{
    cout<<"Constrains are not matching!";
    }
    }}else{
    cout<<"Constrains are not matching!";
    }
	// your code goes here
	return 0;
}