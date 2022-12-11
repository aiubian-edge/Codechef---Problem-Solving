/******************************************************************************
Reach fast

Problem
Chef is standing at coordinate AA while Chefina is standing at coordinate BB.

In one step, Chef can increase or decrease his coordinate by at most KK.

Determine the minimum number of steps required by Chef to reach Chefina.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of three integers X, Y,X,Y, and KK, the initial coordinate of Chef, the initial coordinate of Chefina and the maximum number of coordinates Chef can move in one step.
Output Format
For each test case, output the minimum number of steps required by Chef to reach Chefina.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        int d = abs(x-y);
        int a = (d%k)?(d/k+1):d/k;
        cout<<a<<endl;
    }
	// your code goes here
	return 0;
}
