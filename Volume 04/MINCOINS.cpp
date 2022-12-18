/******************************************************************************
Minimum number of coins

Problem
Chef has infinite coins in denominations of rupees 55 and rupees 1010.

Find the minimum number of coins Chef needs, to pay exactly XX rupees. If it is impossible to pay XX rupees in denominations of rupees 55 and 1010 only, print -1−1.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single integer XX.
Output Format
For each test case, print a single integer - the minimum number of coins Chef needs, to pay exactly XX rupees. If it is impossible to pay XX rupees in denominations of rupees 55 and 1010 only, print -1−1.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%10==0){
            cout<<n/10<<endl;
        }
        else if(n%5==0){
            cout<<(n/10)+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
	// your code goes here
	return 0;
}
