/******************************************************************************
Blackjack

Problem
Chef is playing a variant of Blackjack, where 33 numbers are drawn and each number lies between 11 and 1010 (with both 11 and 1010 inclusive). Chef wins the game when the sum of these 33 numbers is exactly 2121.

Given the first two numbers AA and BB, that have been drawn by Chef, what should be 33-rd number that should be drawn by the Chef in order to win the game?

Note that it is possible that Chef cannot win the game, no matter what is the 33-rd number. In such cases, report -1−1 as the answer.

Input Format
The first line will contain an integer TT - number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers AA and BB - the first and second number drawn by the Chef.
Output Format
For each testcase, output the 33-rd number that should be drawn by the Chef in order to win the game. Output -1−1 if it is not possible for the Chef to win the game.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if((a+b)>=11){
            cout<<21-(a+b)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }
	return 0;
}
