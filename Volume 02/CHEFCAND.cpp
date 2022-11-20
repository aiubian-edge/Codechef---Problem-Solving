/******************************************************************************

Problem
There are NN children and Chef wants to give them 11 candy each. Chef already has XX candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 44 candies are available.

Determine the minimum number of candy packets Chef must buy so that he is able to give 11 candy to each of the NN children.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains two integers NN and XX — the number of children and the number of candies Chef already has.
Output Format
For each test case, output the minimum number of candy packets Chef must buy so that he is able to give 11 candy to each of the NN children.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++){
        float n, x;
        cin>>n>>x;
        if(x<n){
        float restp = ceil((n-x)/4);
        cout<<restp<<endl;
        }
        else{
            cout<<0<<endl;
        }
       
    }
	// your code goes here
	return 0;
}
