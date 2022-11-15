/******************************************************************************

Problem
For each bill you pay using CRED, you earn XX CRED coins.
At CodeChef store, each bag is worth 100100 CRED coins.

Chef pays YY number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers XX and YY.
Output Format
For each test case, output in a single line - the maximum number of bags Chef can get from the CodeChef store.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y;
	    cin>>x>>y;
	    cout<<(x*y)/100<<endl;
	}
	// your code goes here
	return 0;
}

