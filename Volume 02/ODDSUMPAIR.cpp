/******************************************************************************

Problem
Chef has 33 numbers A, BA,B and CC.

Chef wonders if it is possible to choose exactly two numbers out of the three numbers such that their sum is odd.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of three integers A, B, CA,B,C.
Output Format
For each test case, output YES if you can choose exactly two numbers with odd sum, NO otherwise.

The output is case-insensitive. Thus, the strings YES, yes, yeS, and Yes are all considered the same.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	for(int i=0; i<t; i++){
        cin>>a>>b>>c;
        if(a%2!=0 && b%2!=0 && c%2==0 ){
            cout<<"YES"<<endl;
        }
        else if(a%2!=0 && b%2==0 && c%2!=0 ){
             cout<<"YES"<<endl;
        }
        else if(a%2 !=0 && b%2==0 && c%2==0 ){
             cout<<"YES"<<endl;
        }
        else if(a%2==0 && b%2!=0 && c%2!=0 ){
             cout<<"YES"<<endl;
        }
        else if(a%2==0 && b%2!=0 && c%2==0 ){
             cout<<"YES"<<endl;
        }
        else if(a%2==0 && b%2==0 && c%2!=0 ){
             cout<<"YES"<<endl;
        }
        else if(a%2!=0 && b%2!=0 && c%2!=0 ){
             cout<<"NO"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }

	}
	// your code goes here
	return 0;
}

