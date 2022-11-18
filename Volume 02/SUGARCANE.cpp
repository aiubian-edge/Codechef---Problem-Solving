/******************************************************************************

Problem
While Alice was drinking sugarcane juice, she started wondering about the following facts:

The juicer sells each glass of sugarcane juice for 5050 coins.
He spends 20\%20% of his total income on buying sugarcane.
He spends 20\%20% of his total income on buying salt and mint leaves.
He spends 30\%30% of his total income on shop rent.
Alice wonders, what is the juicer's profit (in coins) when he sells NN glasses of sugarcane juice?

Input Format
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains an integer NN, as described in the problem statement.
Output Format
For each test case, output on a new line the juicer's profit when he sells NN glasses of juice.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,x,m;
        cin>>n;
        m=n*50;
	    x=(n*50)-((0.2*m)+(0.2*m)+(0.3*m));
        cout<<x<<endl;
    }
	// your code goes here
	return 0;
}
