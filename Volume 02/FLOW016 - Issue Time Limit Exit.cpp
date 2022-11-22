/******************************************************************************

Problem
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input Format
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output Format
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,lcm,gcd,c;
        gcd=0;
        lcm=0;
        // int gl=0;
        int ll=0;
        // c=0;
        cin>>a>>b;
        if(a>b){
             for(int j=1 ; j<=b ; j++){
                 if(a%j ==0 && b%j==0){
                    //  c++;
                     gcd=j;
                 }
                //  gl++;
             }
             for(int j=a; j<=a*b; j=j+a){
                 if(j%a==0 && j%b==0){
                     lcm=j;
                     break;
                 }
                //   ll++;
             }
        }
        else if(b>a){
             for(int j=1 ; j<=a ; j++){
                 if(a%j ==0 && b%j==0){
                    //  c++;
                     gcd=j;
                 }
                //   gl++;
             }
             for(int j=b; j<=a*b ;j=j+b){
                 if(j%a==0 && j%b==0){
                     lcm=j;
                     break;
                 }
                //   ll++;
             }
        }
        cout<<gcd<<" "<<lcm<<endl;
        // cout<<c<<endl;
        // cout<<gl<<endl;
        // cout<<ll<<endl;
    }
	// your code goes here
	return 0;
}
