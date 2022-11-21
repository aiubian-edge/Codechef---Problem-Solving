/******************************************************************************


Problem
Chef is watching a football match. The current score is A:BA:B, that is, team 11 has scored AA goals and team 22 has scored BB goals. Chef wonders if it is possible for the score to become C:DC:D at a later point in the game (i.e. team 11 has scored CC goals and team 22 has scored DD goals). Can you help Chef by answering his question?

Input Format
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
The first line of each test case contains two integers AA and BB - the intial number of goals team 11 and team 22 have scored respectively.
The second line of each test case contains two integers CC and DD - the final number of goals team 11 and team 22 must be able to score respectively.
Output Format
For each testcase, output POSSIBLE if it is possible for the score to become C:DC:D at a later point in the game, IMPOSSIBLE otherwise.

You may print each character of POSSIBLE and IMPOSSIBLE in uppercase or lowercase (for example, possible, pOSsiBLe, Possible will be considered identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a>c || b>d){
             cout<<"IMPOSSIBLE"<<endl; 
        }
        else{
             cout<<"POSSIBLE"<<endl;
        }
    }
	// your code goes here
	return 0;
}
