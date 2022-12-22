/******************************************************************************
https://www.codechef.com/problems/CHEFPAGES

Important Pages on CodeChef

Problem
MoEngage noticed that some users are not aware of the practice page on CodeChef, and some others are not aware of the rated contests on CodeChef. So, MoEngage wants to send an email to the users depending on which of the following groups they fall into:

If the user has never submitted on the practice page then send an email with the text:

https://www.codechef.com/practice

If the user has submitted on the practice page, but never participated in a contest then send an email with the text:

https://www.codechef.com/contests

If the user has submitted on the practice page as well as participated in a contest then send an email with the text:

https://discuss.codechef.com

so that they may discuss with other members of the community.

Help MoEngage by writing a program that takes as input two integers AA and BB where:

A = 1A=1 if the user has submitted on the practice page and 00 otherwise.
B = 1B=1 if the user has participated in a contest and 00 otherwise.
Output the appropriate link to be displayed in the email.

Input Format
The input consists of a single line with two space-separated integers AA and BB.
Output Format
Print one of the following strings as per the problem statement.
https://www.codechef.com/practice
https://www.codechef.com/contests
https://discuss.codechef.com

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    bool a,b;
    cin>>a>>b;
    if(a==0){
        cout<<"https://www.codechef.com/practice"<<endl;
    }
    else if(a==1 &&b==0){
        cout<<"https://www.codechef.com/contests"<<endl;
    }
    else if(a==1 &&b==1){
        cout<<"https://discuss.codechef.com"<<endl;
    }
	// your code goes here
	return 0;
}

