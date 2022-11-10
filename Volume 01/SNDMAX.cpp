//Problem
// Problem Statement
// Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.

// Input
// First line contains the number of triples, N.
// The next N lines which follow each have three space separated integers.
// Output
// For each of the N triples, output one new line which contains the second-maximum integer among the three.

#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	if(t>=1 && t<=6){
	for(int i=0;i<t;i++){
        cin>>z>>y>>x;
        if(x>=1 && x<=10000 && y>=1 && y<=10000  && z>=1 && z<=10000 ){
       if(x>y && x>z && y>z){
           cout<<y<<endl;
       }
       else if(x>y && x>z && z>y){
           cout<<z<<endl;
       }
       else if(x>y && x>z && z<y){
           cout<<y<<endl;
       }
       else if(y>x && y>z && x>z){
           cout<<x<<endl;
       }
       else if(y>x && y>z && x<z){
           cout<<z<<endl;
       }
       else if(z>x && z>y && x>y){
           cout<<x<<endl;
       }
       else if(z>x && z>y && x<y){
           cout<<y<<endl;
       }
       
    }
    else{
    cout<<"Constrains are not matching!";
    }
    }
    }
    else{
    cout<<"Constrains are not matching!";
    }
	// your code goes here
	return 0;
}