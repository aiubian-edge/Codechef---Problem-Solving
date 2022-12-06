/******************************************************************************
Score High


Problem
Chef is taking a tough examination. The question paper consists of NN objective problems and each problem has 44 options A, B, C,A,B,C, and DD, out of which, exactly one option is correct.

Since Chef did not study for the exam, he does not know the answer to any of the problems. Chef was looking nearby for help when his friend somehow communicated the following information:

Exactly N_AN 
A
​
  problems have option AA as the answer.
Exactly N_BN 
B
​
  problems have option BB as the answer.
Exactly N_CN 
C
​
  problems have option CC as the answer.
Exactly N_DN 
D
​
  problems have option DD as the answer.
Note that:

N_A + N_B + N_C + N_D = NN 
A
​
 +N 
B
​
 +N 
C
​
 +N 
D
​
 =N.
Each problem is worth exactly 11 mark and there is no negative marking.
Even though Chef knows the number of correct options of each type, he does not know the correct answer to any problem.
Based on the given information, find the maximum marks Chef can guarantee if he marks the answers optimally.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
First line of each test case contains an integer NN denoting the number of problems.
Second line of each test case contains 44 integers N_A, N_B, N_C,N 
A
​
 ,N 
B
​
 ,N 
C
​
 , and N_DN 
D
​
  - as mentioned in the problem statement.
Output Format
For each test case, output the maximum marks Chef can guarantee if he marks the answers optimally.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int n,na,nb,nc,nd;
        cin>>n;
        // cout<<endl;
        cin>>na>>nb>>nc>>nd;
        if(na>=nb && na>=nc && na>=nd)
        {
            cout<<na<<endl;
        }
        else if(nb>=na && nb>=nc && nb>=nd)
        {
            cout<<nb<<endl;
        }
        else if(nc>=nb && nc>=na && nc>=nd)
        {
            cout<<nc<<endl;
        }
        else if(nd>=na && nd>=nb && nd>=nc)
        {
            cout<<nd<<endl;
        }
    }
	// your code goes here
	return 0;
}

/*
 The code starts by declaring an integer variable called t. The code then asks the user to input a number, which is stored in the variable t. Next, it loops through each of the integers that are stored in t and prints them out on screen using cout<
 Next, it checks if na>=nb && na>=nc && na>=nd and if so, it prints out nb on screen with cout<
 If not, then it checks if nc>=nb && nc>=na && nc>=nd and if so, it prints out nc on screen with cout<
 Finally, if neither of those two conditions are true (i.e., neither of these numbers is greater than or equal to any other number), then print out no output at all with cout << endl;
 The code will print out the values of na, nb, and nc.
*/