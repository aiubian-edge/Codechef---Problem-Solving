/******************************************************************************
Chef and his Apps


Problem
Chef's phone has a total storage of SS MB. Also, Chef has 22 apps already installed on his phone which occupy XX MB and YY MB respectively.

He wants to install another app on his phone whose memory requirement is ZZ MB. For this, he might have to delete the apps already installed on his phone. Determine the minimum number of apps he has to delete from his phone so that he has enough memory to install the third app.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains four integers S, X, YS,X,Y and ZZ — the total memory of Chef's phone, the memory occupied by the two already installed apps and the memory required by the third app.
Output Format
For each test case, output the minimum number of apps Chef has to delete from his phone so that he can install the third app.
*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int s,x,y,z,u;
        cin>>s>>x>>y>>z;
        u=x+y;
        if(x>y){
            if(s-(u+z)>=0){
                cout<<0<<endl;
            }
            else if(s-(y+z)>=0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        else{
            if(s-(u+z)>=0){
                cout<<0<<endl;
            }
            else if(s-(x+z)>=0){
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
        
    }
	// your code goes here
	return 0;
}
