/******************************************************************************
Change Row and Column Both

Problem
There is a 10 \times 1010×10 grid with rows numbered 11 to 1010 from top to bottom, and columns 11 to 1010 from left to right. Each cell is identified by a pair (r, c)(r, c) which means that the cell is located at row rr and column cc.

If Chef's current location is (a,b)(a,b), then in one move Chef can go to (c,d)(c,d) if both of the following are satisfied:

a \neq ca=c
b \neq db=d
Determine the minimum number of moves required to go from (s_x, s_y)(s 
x
​
 ,s 
y
​
 ) to (e_x, e_y)(e 
x
​
 ,e 
y
​
 ).

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four integer s_xs 
x
​
 , s_ys 
y
​
 , e_xe 
x
​
 , e_ye 
y
​
  — the coordinates of the starting and ending cells.
Output Format
For each testcase, output the minimum number of moves required to go from (s_x, s_y)(s 
x
​
 ,s 
y
​
 ) to (e_x, e_y)(e 
x
​
 ,e 
y
​
 ).
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int sx,sy,ex,ey;
        cin>>sx>>sy>>ex>>ey;
        if(sx!=ex && sy!=ey){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
	// your code goes here
	return 0;
}


/*
  The code is a for loop that prints 1 or 2 depending on whether the value of sx and sy is equal to ex and ey.
 The code will print 1 if the value of sx is not equal to the value of ex and sy is not equal to the value of ey.
*/