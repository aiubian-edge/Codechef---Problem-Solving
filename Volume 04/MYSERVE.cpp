/******************************************************************************
It is My Serve


Problem
Alice and Bob are playing a game of table tennis where irrespective of the point scored, every player makes 22 consecutive serves before the service changes. Alice makes the first serve of the match. Therefore the first 22 serves will be made by Alice, then the next 22 serves will be made by Bob and so on.

Let's consider the following example match for more clarity:

Alice makes the 1^{st}1 
st
  serve.
Let us assume, Bob wins this point. (Score is 00 for Alice and 11 for Bob)
Alice makes the 2^{nd}2 
nd
  serve.
Let us assume, Alice wins this point. (Score is 11 for Alice and 11 for Bob)
Bob makes the 3^{rd}3 
rd
  serve.
Let us assume, Alice wins this point. (Score is 22 for Alice and 11 for Bob)
Bob makes the 4^{th}4 
th
  serve.
Let us assume, Alice wins this point. (Score is 33 for Alice and 11 for Bob)
Alice makes the 5^{th}5 
th
  serve.
And the game continues \ldots…
After the score reaches PP and QQ for Alice and Bob respectively, both the players forgot whose serve it is. Help them determine whose service it is.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first line of each test case contains two integers PP and QQ — the score of Alice and Bob respectively.
Output Format
For each test case, determine which player's (Alice or Bob) serve it is.

You may print each character of Alice and Bob in uppercase or lowercase (for example, Bob, BOB, boB will be considered identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int p,q;
        // int s,c;
        cin>>p>>q;
        // s=p+q;
        // c=s-1;
        // for(int i=0; i<=s; i+2){
        //     if(c==i){
        //       cout<<"Bob"<<endl;
        //     }
        // }
        // for(int i=2; i<=s; i+2){
        //     if(c==i){
        //       cout<<"Alice"<<endl;
        //     }
        // }
        if((p+q+1)%4==0 || (p+q+2)%4==0 ){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
	// your code goes here
	return 0;
}

