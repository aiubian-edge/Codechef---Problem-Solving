/******************************************************************************

Problem
The summer is at its peak in Chefland. Chef is planning to purchase a water cooler to keep his room cool. He has two options available:

Rent a cooler at the cost of XX coins per month.
Purchase a cooler for YY coins.
Given that the summer season will last for MM months in Chefland, help Chef in finding whether he should rent the cooler or not.

Chef rents the cooler only if the cost of renting the cooler is strictly less than the cost of purchasing it. Otherwise, he purchases the cooler.

Print \texttt{YES}YES if Chef should rent the cooler, otherwise print \texttt{NO}NO.

Input Format
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains three integers XX, YY and MM, as described in the problem statement.
Output Format
For each test case, output \texttt{YES}YES if Chef should rent the cooler, otherwise output \texttt{NO}NO.

You may print each character of the string in uppercase or lowercase (for example, the strings \texttt{YeS}YeS, \texttt{yEs}yEs, \texttt{yes}yes and \texttt{YES}YES will all be treated as identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	int t,x,m,y;
	cin>>t;
	for(int i=0; i<t; i++){
        cin>>x>>y>>m;
        if(x*m>=y){
            cout<<"NO"<<endl;
        }
        else{
             cout<<"YES"<<endl;
        }

	}
	// your code goes here
	return 0;
}
