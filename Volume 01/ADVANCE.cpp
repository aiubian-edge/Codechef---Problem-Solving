// Problem
// Chef's current rating is XX, and he wants to improve it. It is generally recommended that a person with rating XX should solve problems whose difficulty lies in the range [X, X+200][X,X+200], i.e, problems whose difficulty is at least XX and at most X+200X+200.

// You find out that Chef is currently solving problems with a difficulty of YY.

// Is Chef following the recommended practice or not?

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases. The description of the test cases follows.
// Each test case consists of a single line of input, containing two space-separated integers X, YX,Y.
// Output Format
// For each test case, output on a new line YES if Chef is following the recommended practice style, and NO otherwise.

// Each letter of the output may be printed in either lowercase or uppercase. For example, the strings YES, yEs, and Yes will be considered identical.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x,y;
        cin>>x>>y;
        if((x+200)>=y && y>=x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}

