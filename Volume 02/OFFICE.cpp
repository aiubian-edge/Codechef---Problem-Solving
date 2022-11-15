/******************************************************************************


Problem
Recently Chef joined a new company. In this company, the employees have to work for XX hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for YY hours (Y \lt X)(Y<X) on Friday. Saturdays and Sundays are holidays.

Determine the total number of working hours in one week.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers XX and YY — the number of working hours on each day from Monday to Thursday and the number of working hours on Friday respectively.
Output Format
For each test case, output the total number of working hours in one week.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t,x,y;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if(y<x){
            cout<<x*4+y<<endl;
        }
        else{
            cout<<"Constraints Error"<<endl;
        }
    }
	// your code goes here
	return 0;
}
