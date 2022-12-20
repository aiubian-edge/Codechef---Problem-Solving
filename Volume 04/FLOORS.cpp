/******************************************************************************
Too many Floors

Problem
Chef and Chefina are residing in a hotel.

There are 1010 floors in the hotel and each floor consists of 1010 rooms.

Floor 11 consists of room numbers 11 to 1010.
Floor 22 consists of room numbers 1111 to 2020.
\ldots…
Floor ii consists of room numbers 10 \cdot (i-1) + 110⋅(i−1)+1 to 10 \cdot i10⋅i.
You know that Chef's room number is XX while Chefina's Room number is YY.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers X, YX,Y, the room numbers of Chef and Chefina respectively.
Output Format
For each test case, output the number of floors Chef needs to travel to reach Chefina's room.

*******************************************************************************/
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,c;
        c=0;
        cin>>x>>y;
        if(x>y){
            for(int j=0; j<x; j=j+10){
               if(j>=y){
                    c++;
               }
            }
            cout<<c<<endl;
        }
        else{
            for(int j=0; j<y; j=j+10){
              if(j>=x){
                    c++;
               }
            }
            cout<<c<<endl;
        }
    }
	// your code goes here
	return 0;
}
