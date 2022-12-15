/******************************************************************************
Water Mixing

Problem
Chef is setting up a perfect bath for himself. He has XX litres of hot water and YY litres of cold water.
The initial temperature of water in his bathtub is AA degrees. On mixing water, the temperature of the bathtub changes as following:

The temperature rises by 11 degree on mixing 11 litre of hot water.
The temperature drops by 11 degree on mixing 11 litre of cold water.
Determine whether he can set the temperature to BB degrees for a perfect bath.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of four space-separated integers A, B, X,A,B,X, and YY — the initial temperature of bathtub, the desired temperature of bathtub, the amount of hot water in litres, and the amount of cold water in litres respectively.
Output Format
For each test case, output on a new line, YES if Chef can get the desired temperature for his bath, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YES, yEs, yes, and yeS will all be treated as identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>a>>b>>x>>y;
        if(a<b){
            if(a+x>=b){
            cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(a-y<=b){
            cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
    }
	// your code goes here
	return 0;
}
