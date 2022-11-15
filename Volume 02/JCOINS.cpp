/******************************************************************************

Problem
Janmansh received XX coins of 1010 rupees and YY coins of 55 rupees from Chingari. Since he is weak in math, can you find out how much total money does he have?

Input Format
The first line will contain TT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers XX, YY - the number of 1010 and 55 rupee coins respectively.
Output Format
For each test case, output how much total money does Janmansh have.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        cout<<x*10+y*5<<endl;
    }
	// your code goes here
	return 0;
}
