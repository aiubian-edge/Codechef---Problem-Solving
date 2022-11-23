/******************************************************************************

Problem
Somu went to the gym today. He decided to do XX sets of squats. Each set consists of 1515 squats. Determine the total number of squats that he did today.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer XX — the total number of sets of squats that Somu did.
Output Format
For each test case, output the total number of squats done by Somu.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int x;
        cin>>x;
        cout<<x*15<<endl;
    }
	// your code goes here
	return 0;
}
