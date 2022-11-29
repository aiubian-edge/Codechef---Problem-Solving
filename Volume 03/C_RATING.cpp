/******************************************************************************

Problem
Alice has recently started playing Chess. Her current rating is XX. She noticed that when she wins a game, her rating increases by 88 points.

Can you help Alice in finding out the minimum number of games she needs to win in order to make her rating greater than or equal to YY?

Input Format
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first line of each test case contains two integers XX and YY, as described in the problem statement.
Output Format
For each test case, output the minimum number of games that Alice needs to win in order to make her rating greater than or equal to YY.

*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        float x,y,m;
        cin>>x>>y;
        m=y-x;
        if(x<y){
            cout<<ceil(m/8)<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
	// your code goes here
	return 0;
}
