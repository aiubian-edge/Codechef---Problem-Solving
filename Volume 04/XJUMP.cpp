/******************************************************************************
X Jumps

Problem
Chef is currently standing at stair 00 and he wants to reach stair numbered XX.

Chef can climb either YY steps or 11 step in one move.
Find the minimum number of moves required by him to reach exactly the stair numbered XX.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing two space separated integers XX and YY denoting the number of stair Chef wants to reach and the number of stairs he can climb in one move.
Output Format
For each test case, output the minimum number of moves required by him to reach exactly the stair numbered XX.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x%y==0){
            cout<<x/y<<endl;
        }
        else if(x<y){
            cout<<x<<endl;
        }
        else{
            int f;
            f=x%y;
            cout<<x/y+f<<endl;
        }
    }
	// your code goes here
	return 0;
}

