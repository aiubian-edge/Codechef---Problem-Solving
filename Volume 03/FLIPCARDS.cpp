/******************************************************************************

Problem
There are NN cards on a table, out of which XX cards are face-up and the remaining are face-down.

In one operation, we can do the following:

Select any one card and flip it (i.e. if it was initially face-up, after the operation, it will be face-down and vice versa)
What is the minimum number of operations we must perform so that all the cards face in the same direction (i.e. either all are face-up or all are face-down)?

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers NN and XX — the total number of cards and the number of cards which are initially face-up.
Output Format
For each test case, output the minimum number of cards you must flip so that all the cards face in the same direction.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,c;
        cin>>n>>x;
        c=n-x;
        if(c>=x){
            cout<<x<<endl;
        }
        else{
             cout<<c<<endl;
        }
    }
	// your code goes here
	return 0;
}
