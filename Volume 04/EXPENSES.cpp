/******************************************************************************
Expense List

Problem
Chef has made a list for his monthly expenses. The list has NN expenses with index 11 to NN. The money spent on each expense depends upon the monthly income of Chef.

Chef spends 50\%50% of his total income on the expense with index 11.
The money spent on the i^{th}i 
th
  expense (i>1)(i>1) is equal to 50\%50% of the amount remaining, after paying for all expenses with indices less than ii.
Given that Chef earns 2^X2 
X
  rupees in a month, find the amount he saves after paying for all NN expenses.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of two space-separated integers NN and XX — where NN denotes the number of expenses and 2^X2 
X
  denotes the monthly income of Chef.
Output Format
For each test case, output on a new line, the amount saved by Chef after paying for all NN expenses.
*******************************************************************************/
#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        long long a = pow(2,n);
        long long p = pow(2,x);
        cout<<p/a<<endl;
    }
	return 0;
}

