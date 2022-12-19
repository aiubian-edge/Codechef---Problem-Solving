/******************************************************************************
Cup Finals


Problem
It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to DD.

Given that the skills of the teams competing in the final are XX and YY respectively, determine whether Chef will find the game interesting or not.

Input Format
The first line of input will contain a single integer TT, denoting the number of testcases. The description of TT testcases follows.
Each testcase consists of a single line of input containing three space-separated integers XX, YY, and DD — the skill levels of the teams and the maximum skill difference.
Output Format
For each testcase, output "YES" if Chef will find the game interesting, else output "NO" (without the quotes). The checker is case-insensitive, so "YeS" and "nO" etc. are also acceptable.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
       int x,y,d,sd;
       cin>>x>>y>>d;
       sd=abs(x-y);
       if(d>=sd){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
    }
	// your code goes here
	return 0;
}
