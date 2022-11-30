/******************************************************************************
Problem
Alice and Bob were playing a game yet again but this time, Bob already lost the game. Now he wants to take revenge.

Bob saw a jigsaw puzzle which was solved by Alice and decided to jumble the puzzle pieces again. There are NN puzzle pieces in a line numbered from 11 to NN in increasing order and he has KK minutes before Alice catches him.
Bob can swap any two pieces of the puzzle. Each swap takes 11 minute, and so Bob can make at most KK swaps.

Let A_iA 
i
​
  denote the piece in the ii-th position after Bob finishes making his swaps.

Alice's angriness is defined to be the number of pairs (i, j)(i,j) such that 1 \leq i \lt j \leq N1≤i<j≤N and A_i \gt A_jA 
i
​
 >A 
j
​
 .

Bob would like to make Alice as angry as possible, so he asks for your help: if he performs his swaps optimally, what is the maximum angriness he can achieve?

Input Format
The first line of input contains an integer TT, denoting the number of test cases.
The first and only line of each test case contains two space-separated integers NN and KK: the number of pieces and the number of swaps Bob can make.
Output Format
For each test case, output on a new line a single integer: Alice's maximum possible angriness.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long int n,k;
        cin>>n>>k;
        long long int res= (n*(n-1))/2;
        if(k<n/2){
            long long x=n-2*k;
            res -=(x*(x-1))/2;
        }
        cout<<res<<endl;
    }
	return 0;
}

