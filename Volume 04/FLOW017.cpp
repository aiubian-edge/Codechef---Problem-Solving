/******************************************************************************
https://www.codechef.com/problems/FLOW017

Second Largest

Problem
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input Format
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output Format
For each test case, display the second largest among A, B and C, in a new line.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a>b && b>c )||(a<b && b<c)){
            cout<<b<<endl;
        }
        else  if((b>a && a>c) || (b<a && a<c)){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
	// your code goes here
	return 0;
}
