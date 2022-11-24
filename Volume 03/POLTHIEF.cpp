/******************************************************************************

Problem
Chef discovered that his secret recipe has been stolen. He immediately informs the police of the theft.

It is known that the policeman and thief move on the number line. You are given that:

The initial location of the policeman on the number line is XX and his speed is 22 units per second.
The initial location of the thief on the number line is YY and his speed is 11 unit per second.
Find the minimum time (in seconds) in which the policeman can catch the thief. Note that, the policeman catches the thief as soon as their locations become equal and the thief will try to evade the policeman for as long as possible.

Input Format
The first line of input will contain an integer TT — the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two integers XX and YY, as described in the problem statement.
Output Format
For each test case, output in a single line the minimum time taken by the policeman to catch the thief.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int x,y,n,r;
        r=0;
        n=1000000;
        cin>>x>>y;
        if(x<y){
            for(int j = 0; j<n; j++ ){
                if(x+(2*j)==y+j){
                    r=j;
                }
            } 
        }
        else{
             for(int j = n; j>0; j-- ){
                if(x-(2*j)==y-j){
                    r=j;
                }
            } 
        }
       
        cout<<r<<endl;
    }
	// your code goes here
	return 0;
}
