/******************************************************************************
Speed Limit Test

Problem
Alice is driving from her home to her office which is AA kilometers away and will take her XX hours to reach.
Bob is driving from his home to his office which is BB kilometers away and will take him YY hours to reach.

Determine who is driving faster, else, if they are both driving at the same speed print EQUAL.

Input Format
The first line will contain TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing four integers A,X,B,A,X,B, and YY, the distances and and the times taken by Alice and Bob respectively.
Output Format
For each test case, if Alice is faster, print ALICE. Else if Bob is faster, print BOB. If both are equal, print EQUAL.

You may print each character of the string in uppercase or lowercase (for example, the strings equal, equAL, EquAl, and EQUAL will all be treated as identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        float a,x,b,y,s1,s2;
        cin>>a>>x>>b>>y;
        s1=a/x;
        s2=b/y;
        if(s1 > s2){
            cout<<"Alice"<<endl;
        }
        else if(s1==s2){
            cout<<"Equal"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
	// your code goes here
	return 0;
}
