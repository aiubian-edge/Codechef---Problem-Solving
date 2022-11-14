/******************************************************************************
Problem
In a recent breakthrough in mathematics, the proof utilized a concept called Height.

Consider a fraction \frac{a}{b} 
b
a
​
 . Its Height is defined as the maximum of its numerator and denominator. So, for example, the Height of \frac{3}{19} 
19
3
​
  would be 1919, and the Height of \frac{27}{4} 
4
27
​
  would be 2727.

Given aa and bb, find the Height of \frac{a}{b} 
b
a
​
 .

Input Format
The only line of input contains two integers, aa and bb.

Output Format
Output a single integer, which is the Height of \frac{a}{b} 
b
a
​
 .
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<a<<endl;
    }
    else{
        cout<<b<<endl;
    }
	// your code goes here
	return 0;
}
