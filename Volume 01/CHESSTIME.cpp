// Problem
// Alice, Bob and Charlie are bidding for an artifact at an auction.
// Alice bids AA rupees, Bob bids BB rupees, and Charlie bids CC rupees (where AA, BB, and CC are distinct).

// According to the rules of the auction, the person who bids the highest amount will win the auction.
// Determine who will win the auction.

// Input Format
// The first line contains a single integer TT — the number of test cases. Then the test cases follow.
// The first and only line of each test case contains three integers AA, BB, and CC, — the amount bid by Alice, Bob, and Charlie respectively.
// Output Format
// For each test case, output who (out of Alice, Bob, and Charlie) will win the auction.

// You may print each character of Alice, Bob, and Charlie in uppercase or lowercase (for example, ALICE, aliCe, aLIcE will be considered identical).

#include <iostream>
using namespace std;

int main() {
    int t,y,x,z;
    cin>>t;
    if(t>=1 && t<=1000)
    {
    for(int i=0;i<t;i++){
        cin>>x>>y>>z;
        if(x>=1 && x<=1000 && y>=1 && y<=1000 && z>=1 && z<=1000){
           if(x>y && x>z){
               cout<<"Alice"<<endl;
           }
           else if(y>x && y>z){
               cout<<"Bob"<<endl;
           }
           else{
                cout<<"Charlie"<<endl;
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