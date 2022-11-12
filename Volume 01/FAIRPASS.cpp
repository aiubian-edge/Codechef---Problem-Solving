/*Problem
There is a fair going on in Chefland. Chef wants to visit the fair along with his NN friends. Chef manages to collect KK passes for the fair. Will Chef be able to enter the fair with all his NN friends?

A person can enter the fair using one pass, and each pass can be used by only one person.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line containing two space-separated integers N, KN,K.
Output Format
For each test case, print on a new line YES if Chef will be able to enter the fair with all his NN friends and NO otherwise.

You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).
*/
#include <iostream>
using namespace std;

int main() {
    int t,a,b;
    cin>>t;
    if(t>=1 && t<=100)
    {
    for(int i=0;i<t;i++){
        cin>>a>>b;
        if(a>=1 && a<=100 && b>=1 && b<=100){
          if(a<b){
              cout<<"YES"<<endl;
          } 
          else{
              cout<<"NO"<<endl;
          }
        }
        else{
        cout<<"Constraints Errors";
        }
    }
    }
    else{
        cout<<"Constraints Errors";
    }
	// your code goes here
	return 0;
}