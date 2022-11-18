/******************************************************************************

Problem
You know that 11 kg of pulp can be used to make 10001000 pages and 11 notebook consists of 100100 pages.

Suppose a notebook factory receives NN kg of pulp, how many notebooks can be made from that?

Input Format
First line will contain TT, the number of test cases. Then the test cases follow.
Each test case contains a single integer NN - the weight of the pulp the factory has (in kgs).
Output Format
For each test case, output the number of notebooks that can be made using NN kgs of pulp.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        cout<<n*10<<endl;
    }
	// your code goes here
	return 0;
}
