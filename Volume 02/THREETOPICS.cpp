/******************************************************************************

Problem
The Chef has reached the finals of the Annual Inter-school Declamation contest.

For the finals, students were asked to prepare 1010 topics. However, Chef was only able to prepare three topics, numbered AA, BB and CC — he is totally blank about the other topics. This means Chef can only win the contest if he gets the topics AA, BB or CC to speak about.

On the contest day, Chef gets topic XX. Determine whether Chef has any chances of winning the competition.

Print "Yes" if it is possible for Chef to win the contest, else print "No".

You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

Input Format
The first and only line of input will contain a single line containing four space-separated integers AA, BB, CC, and XX — the three topics Chef has prepared and the topic that was given to him on contest day.
Output Format
For each testcase, output in a single line "Yes" or "No".
You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a,b,c,x;
    cin>>a>>b>>c>>x;
    if(x==a || x==b|| x==c){
        cout<<"YES"<<endl;
    }
    else{
         cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}
