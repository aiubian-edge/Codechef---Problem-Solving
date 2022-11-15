/******************************************************************************

Problem
Chef went shopping and bought items worth XX rupees (1 \le X \le 1001≤X≤100). Unfortunately, Chef only has a single 100100 rupees note.

Since Chef is weak at maths, can you help Chef in calculating what money he should get back after paying 100100 rupees for those items?

Input Format
First line will contain TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line containing an integer XX, the total price of items Chef purchased.
Output Format
For each test case, output in a single line the money Chef has to receive back.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t,x;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        cout<<100-x<<endl;
    }
	// your code goes here
	return 0;
}
