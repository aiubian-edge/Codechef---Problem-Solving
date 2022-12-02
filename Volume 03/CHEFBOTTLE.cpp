/******************************************************************************
Chef and Water Bottles

Problem
Chef has NN empty bottles where each bottle has a capacity of XX litres.
There is a water tank in Chefland having KK litres of water. Chef wants to fill the empty bottles using the water in the tank.

Assuming that Chef does not spill any water while filling the bottles, find out the maximum number of bottles Chef can fill completely.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, three integers N, X,N,X, and KK.
Output Format
For each test case, output in a single line answer, the maximum number of bottles Chef can fill completely.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
       int n,x,k,f;
       cin>>n>>x>>k;
       f=k/x;
       if(f>=n){
           cout<<n<<endl;
       }
       else{
           cout<<f<<endl;
       }
    }
	// your code goes here
	return 0;
}
/*
 The code is a for loop that iterates through the number of times specified by t. The first time through, it will print out 0 because there is nothing to print.
 Then it prints out each value in turn as long as they are not greater than n. If they are greater than n, then the program prints out the next value and continues on until all values have been printed or until f is less than or equal to n.
 The code is a for loop that iterates through each number in the range of 0 to t-1.
 The first statement in the for loop sets up an integer variable called t. This variable is used to control how many times the loop will iterate.
 The second statement in the for loop prints out a string of numbers on the screen, starting with zero and ending with one less than t-1.
 The third statement in the for loop reads a number from cin, which is then assigned to an integer variable called n. The fourth statement in the for loop assigns x to be equal to n/t, which will be used later as a multiplier when calculating f (the value of k divided by x).
*/