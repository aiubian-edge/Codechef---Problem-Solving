/******************************************************************************

Candy Distribution

Problem
Chef has NN candies. He has to distribute them to exactly MM of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.

NOTE: Chef will not take any candies himself and will distribute all the candies.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers NN and MM, the number of candies and the number of friends.
Output Format
For each test case, the output will consist of a single line containing Yes if Chef can distribute the candies as per the conditions and No otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings yes, Yes, yEs, and YES will all be treated as identical).

*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int n,m;
        cin>>n>>m;
        int c=n/m;
        if(n%m==0){
            if(c%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
	// your code goes here
	return 0;
}

/*
 The code asks the user to input an integer, which is then used in a for loop.
 The for loop iterates through each number from 0 to the value of t-1.
 Inside the loop, it asks the user to enter two integers: n and m. These are then used in a nested if statement that checks whether or not c%2==0 (which means that c is divisible by 2).
 If this condition evaluates as true, then it prints "YES" on screen and continues with its next iteration of the for loop.
 Otherwise, it prints "NO" on screen and continues with its next iteration of the for loop.
 The code uses nested if statements inside a while statement to check whether or not n%m==0 (which means that n is divisible by m).
 If this condition evaluates as true, then it prints "YES" on screen and continues with its next iteration of the while statement's body block; otherwise, it prints "NO" on screen and continues with its next iteration of the while statement's body block
 The code is an example of a for loop.
 This loop will iterate through the values in the t variable, which is defined as an integer value input by the user and stored in the cin variable.
 The code first displays "INPUT YOUR NUMBER" on screen to prompt for a number.
 The user enters their number into cin, which is then passed to main() and stored in t. The next line of code displays "THE VALUE OF T IS: " followed by the value of t that was inputted by the user.
 The next line of code defines i as 0 and then executes a while loop that will continue executing until i reaches t-1, or when it encounters a break statement
*/
