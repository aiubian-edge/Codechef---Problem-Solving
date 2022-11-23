/******************************************************************************

Problem
Chef is the financial incharge of Chefland and one of his duties is identifying if any company has gained a monopolistic advantage in the market.

There are exactly 33 companies in the market each of whose revenues are denoted by R_1R 
1
​
 , R_2R 
2
​
  and R_3R 
3
​
  respectively. A company is said to have a monopolistic advantage if its revenue is strictly greater than the sum of the revenues of its competitors.

Given the revenue of the 33 companies, help Chef determine if any of them has a monopolistic advantage.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing three space separated integers R_1R 
1
​
 , R_2R 
2
​
  and R_3R 
3
​
  denoting the revenue of the three companies respectively.
Output Format
For each test case, output \texttt{YES}YES if any of the companies has a monopolistic advantage over its competitors, else output \texttt{NO}NO.

You may print each character of the string in uppercase or lowercase (for example, the strings \texttt{YeS}YeS, \texttt{yEs}yEs, \texttt{yes}yes and \texttt{YES}YES will all be treated as identical).

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int x[t];
    x[0]=0;
    int c;
   
    for(int i =0; i<t; i++){
         c=0;
        for(int j =0; j<3; j++){
            cin>>x[j];
            c+=x[j];
            if(x[0]<x[j]){
                x[0]=x[j];
                
            }
        }
        int r=c-x[0];
        // cout<<c<<" "<<x[0]<<endl;
        if(x[0]>r){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
