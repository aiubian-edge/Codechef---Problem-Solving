/******************************************************************************

Problem
In Chefland, a tennis game involves 44 referees.
Each referee has to point out whether he considers the ball to be inside limits or outside limits. The ball is considered to be IN if and only if all the referees agree that it was inside limits.

Given the decision of the 44 referees, help Chef determine whether the ball is considered inside limits or not.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing 44 integers R_1, R_2, R_3, R_4R 
1
​
 ,R 
2
​
 ,R 
3
​
 ,R 
4
​
  denoting the decision of the respective referees.
Here RR can be either 00 or 11 where 00 would denote that the referee considered the ball to be inside limits whereas 11 denotes that they consider it to be outside limits.

Output Format
For each test case, output IN if the ball is considered to be inside limits by all referees and OUT otherwise.

The checker is case-insensitive so answers like in, In, and IN would be considered the same.

*******************************************************************************/


#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	for(int i=0; i<t; i++){
	  int n,inc,outc;
      inc=0;
      outc=0;
	  n=4;
	  int r[n];
	  for(int j=0;j<n;j++){
	      cin>>r[j];
	      if(r[j]==0){
	          inc++;
	       //   cout<<inc<<endl;
	      }
	      else{
	          outc++;
	      }
	  }
	  if(inc==4){
	      cout<<"IN"<<endl;
	  }
	  else{
	      cout<<"OUT"<<endl;
	  }
	}
	
	// your code goes here
	return 0;
}



