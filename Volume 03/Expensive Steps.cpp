/******************************************************************************
Problem
There is an N\times NN×N grid, with rows numbered 11 to NN from top to bottom and columns numbered 11 to NN from left to right. The cell at the intersection of the ii-th row and jj-th column is denoted (i, j)(i,j).

Chef is standing at position (x_1, y_1)(x 
1
​
 ,y 
1
​
 ) of this grid. He wants to reach position (x_2, y_2)(x 
2
​
 ,y 
2
​
 ).

To achieve this, he can take either horizontal or vertical steps. That is, from cell (x, y)(x,y), he can move to one of (x-1, y), (x+1, y), (x, y-1), (x, y+1)(x−1,y),(x+1,y),(x,y−1),(x,y+1).

However, Chef does not need to stay within the grid, that is, he can choose to go outside it if he so wishes.

The cost of a horizontal/vertical step is 00 if both the starting and ending square lie outside the grid, and 11 otherwise.
Formally, suppose Chef takes one step from (x, y)(x,y) to (x', y')(x 
′
 ,y 
′
 ). Then,

If (x, y)(x,y) lies within the grid, the cost of this step is 11
If (x', y')(x 
′
 ,y 
′
 ) lies within the grid, the cost of this step is 11
If both the above don't hold, the cost of this step is 00
Find the minimum cost to reach (x_2, y_2)(x 
2
​
 ,y 
2
​
 ) from (x_1, y_1)(x 
1
​
 ,y 
1
​
 ).

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of one line of input containing five space-separated integers NN, x_1x 
1
​
 , y_1y 
1
​
 , x_2x 
2
​
 , and y_2y 
2
​
 .
Output Format
For each test case, output on a new line the minimum cost of traveling from (x_1, y_1)(x 
1
​
 ,y 
1
​
 ) to (x_2, y_2)(x 
2
​
 ,y 
2
​
 ).
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
       int n,x1,y1,x2,y2;
       cin>>n>>x1>>y1>>x2>>y2;
       if(x1<1 && y1>n && x2<1 && y2>n){
           cout<<0<<endl;
       }
       else if(x1<1 ||y1>n){
           cout<<min(min(n-x2+1,n-y2+1),min(x2,y2))<<endl;
           continue;
       }
       else if(x2<1 ||y2>n){
           cout<<min(min(n-x1+1,n-y1+1),min(x1,y1))<<endl;
           continue;
       }
       int k= min(min(n-x1+1,n-y1+1),min(x1,y1));
       int l= min(min(n-x2+1,n-y2+1),min(x2,y2));
       int m= abs(x1-x2)+abs(y1-y2);
       cout<<min(m,k+l)<<endl;
       
    }
	// your code goes here
	return 0;
}

