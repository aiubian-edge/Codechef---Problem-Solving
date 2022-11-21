/******************************************************************************

Problem
Chef wants to reach home as soon as possible. He has two options:

Travel with his BIKE which takes XX minutes.
Travel with his CAR which takes YY minutes.
Which of the two options is faster or do they both take same time?

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains a single line of input, two integers X, YX,Y representing the time taken to travel with BIKE and CAR respectively.
Output Format
For each test case, print CAR if travelling with Car is faster, BIKE if travelling with Bike is faster, SAME if they both take the same time.

You may print each character of CAR, BIKE and SAME in uppercase or lowercase (for example, CAR, Car, cAr will be considered identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int x,y;
        cin>>x>>y;
        if(x>y){
             cout<<"CAR"<<endl; 
        }
        else if(x<y){
            cout<<"BIKE"<<endl;
        }
        else{
             cout<<"SAME"<<endl;
        }
    }
	// your code goes here
	return 0;
}
