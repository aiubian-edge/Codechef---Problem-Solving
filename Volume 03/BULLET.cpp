/******************************************************************************

Problem
Mario's bullet moves at XX pixels per frame. He wishes to shoot a goomba standing YY pixels away from him. The goomba does not move.

Find the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least ZZ seconds from now.

Input Format
The first line of input will contain an integer TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers X, Y,X,Y, and ZZ.
Output Format
For each test case, output in a single line the minimum time (in seconds) after which Mario should shoot the bullet, such that it hits the goomba after at least ZZ seconds from now.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i = 0 ; i<t ; i++){
        int x,y,z,p;
        cin>>x>>y>>z;
        p=y/x;
        if(z-p<=0){
             cout<<0<<endl;
        }
        else{
            cout<<z-p<<endl;
        }
        
    }
 
	return 0;
}