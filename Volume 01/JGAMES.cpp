// Problem
// Janmansh and Jay are playing a game. They start with a number XX and they play a total of YY moves. Janmansh plays the first move of the game, after which both the players make moves alternatingly.

// In one move, a player can increment or decrement XX by 11.

// If the final number after performing YY moves is even, then Janmansh wins otherwise, Jay wins. Determine the winner of the game if both the players play optimally.

// Input Format
// The first line will contain TT - the number of test cases. Then the test cases follow.
// The first and only line of each test case contains two integers XX, YY - the starting number and the total number of moves respectively.
// Output Format
// For each test case, output the winning player (Janmansh or Jay).

// You may print each character of Janmansh and Jay in uppercase or lowercase (for example, JAY, jaY, JAy will be considered identical).

#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	for(int i=0; i<t;i++){
	    cin>>a>>b;
	    if((a+b)%2==0){
	        cout<<"Janmansh"<<endl;
	    }
	    else{
	         cout<<"Jay"<<endl;
	    }
	}
	// your code goes here
	return 0;
}
