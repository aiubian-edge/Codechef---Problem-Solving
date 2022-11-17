/******************************************************************************

Problem
Chef has scored A, B,A,B, and CC marks in 33 different subjects respectively.

Chef will fail if the average score of any two subjects is less than 3535. Determine whether Chef will pass or fail.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three integers A, B, CA,B,C, denoting the Chef's score in the three subjects.
Output Format
For each test case, if Chef will pass, print PASS, otherwise print FAIL.

You may print each character of the string in uppercase or lowercase (for example, the strings pass, Pass, pAss, and PASS will all be treated as identical).



*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++){
	  int a,b,c;
      cin>>a>>b>>c;
	  if((a+b)/2<35 || (a+c)/2<35 || (b+c)/2<35){
	      cout<<"Fail"<<endl;
	  }
	  else{
	      cout<<"Pass"<<endl;
	  }
	}
	
	// your code goes here
	return 0;
}

