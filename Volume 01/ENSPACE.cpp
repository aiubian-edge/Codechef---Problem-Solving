// Problem
// Chef's computer has NN GB of free space. He wants to save XX files, each of size 1 GB and YY files, each of size 2 GB on his computer. Will he be able to do so?

// Chef can save all the files on his computer only if the total size of the files is less than or equal to the space available on his computer.

// Input Format
// The first line contains an integer TT, denoting the number of test cases. The TT test cases then follow:
// The first and only line of each test case contains three integers N, X, YN,X,Y, denoting the free-space in computer, the number of 1 and 2 GB files respectively.
// Output Format
// For each test case, print YES if Chef is able to save the files and NO otherwise.

// You may print each character of the string in uppercase or lowercase (for example, the strings yEs, yes, Yes and YES will all be treated as identical).

#include <iostream>
using namespace std;

int main() {
	int t,x,y,z;
	cin>>t;
	if(t>=1 && t<=100){
	for(int i=0; i<t; i++){
	    cin>>x>>y>>z;
	    if(x>=1 & x<=100 && y>=1 & y<=100 && z>=1 & z<=100)
	    {
	       if(y+z*2<=x){
	           cout<<"YES"<<endl;
	       }
	       else{
	           cout<<"NO"<<endl;
	       }
	    }
	    else{
            cout<<"Constrains are not matching!";
        }
	}
	}
	else{
    cout<<"Constrains are not matching!";
    }// your code goes here
	return 0;
}