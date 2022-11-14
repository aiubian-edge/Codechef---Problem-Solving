/******************************************************************************

Problem
Janmansh has to submit 33 assignments for Chingari before 1010 pm and he starts to do the assignments at XX pm. Each assignment takes him 11 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?

Input Format
The first line will contain TT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer XX - the time when Janmansh starts doing the assignemnts.
Output Format
For each test case, output Yes if he can complete the assignments on time. Otherwise, output No.

You may print each character of Yes and No in uppercase or lowercase (for example, yes, yEs, YES will be considered identical).

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x;
	cin>>t;
	for(int i=0;i<t;i++){
	    cin>>x;
	    if((x+3)<=10){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
