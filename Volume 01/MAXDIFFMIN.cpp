// Problem
// Chef is given 33 integers A, B,A,B, and CC such that A \lt B \lt CA<B<C.

// Chef needs to find the value of max(A, B, C) - min(A, B, C)max(A,B,C)−min(A,B,C).

// Here max(A, B, C)max(A,B,C) denotes the maximum value among A, B, CA,B,C while min(A, B, C)min(A,B,C) denotes the minimum value among A, B, CA,B,C.

// Input Format
// The first line of input will contain a single integer TT, denoting the number of test cases.
// Each test case consists of 33 integers A, B, CA,B,C.
// Output Format
// For each test case, output the value of max(A, B, C) - min(A, B, C)max(A,B,C)−min(A,B,C).

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
           if(x>y && x>z && y>z){
               cout<<x-z<<endl;
           }
           else if(x>y && x>z && z>y){
               cout<<x-y<<endl;
           }
           else if(y>x && y>z && x>z){
               cout<<y-z<<endl;
           }
           else if(y>x && y>z && z>x){
               cout<<y-x<<endl;
           }
           else if(z>x && z>y && x>y){
               cout<<z-y<<endl;
           }
           else if(z>x && z>y && y>x){
               cout<<z-x<<endl;
           }
           else{
                cout<<"Error"<<endl;
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