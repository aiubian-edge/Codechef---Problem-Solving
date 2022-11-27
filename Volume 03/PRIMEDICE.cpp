/******************************************************************************

Problem
Hackerman wants to know who is the better player between Bob and Alice with the help of a game.

The game proceeds as follows:

First, Alice throws a die and gets the number AA
Then, Bob throws a die and gets the number BB
Alice wins the game if the sum on the dice is a prime number; and Bob wins otherwise.
Given AA and BB, determine who wins the game.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers AA and BB.
Output Format
For each test case, output on a new line the winner of the game: Alice or Bob.

Each letter of the output may be printed in either uppercase or lowercase, i.e, Alice, ALICE, AlIce and aLIcE will all be considered equivalent.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,s;
        cin>>a>>b;
        s=a+b;
        if(s==2||s==3){
            cout<<"Alice"<<endl;
            continue;
        }
        int f=0;
        for(int j=2;j<s;j++){
            if(s%j==0){
                f=1;
                break;
            }
        }
        if(f==0){
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
        }
    }
	return 0;
}