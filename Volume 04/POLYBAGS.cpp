/******************************************************************************
Too many items

https://www.codechef.com/problems/POLYBAGS

Problem
Chef bought NN items from a shop. Although it is hard to carry all these items in hand, so Chef has to buy some polybags to store these items.

11 polybag can contain at most 1010 items. What is the minimum number of polybags needed by Chef?

Input Format
The first line will contain an integer TT - number of test cases. Then the test cases follow.
The first and only line of each test case contains an integer NN - the number of items bought by Chef.
Output Format
For each test case, output the minimum number of polybags required.
*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float n;
        cin>>n;
        cout<<ceil(n/10)<<endl;
    }
	// your code goes here
	return 0;
}

