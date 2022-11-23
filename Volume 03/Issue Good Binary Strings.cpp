#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i =0; i<t; i++){
       string s;
       cin>>s;
       int z, o;
       z=o=0;
       int n = s.length();
       for(int j = 0 ; j<n ; j++){
           if(s[j-1]=='1' && s[j]=='0'){
               o++;
           }
           else if(s[j-1]=='0' && s[j]=='1'){
               z++;
           }
       }
       int x,y;
       x=o;
       y=z;
       int ans = 0;
       if(s[0]=='0'){
           if(s[1]=='1'){
               y--;
           }
           else{
               x++;
           }
       }
       else{
           if(s[1]=='1'){
               y++;
           }
           else{
               x--;
           }
       }
       if(x==y){
           ans++;
       }
       for(int j=1;j<n-1;j++){
           x=o;
           y=z;
           if(s[j]=='0'){
               if(s[j+1]=='1'){
                   y--;
               }
               else{
                   x++;
               }
               if(s[j-1]=='1'){
                   x--;
               }
               else{
                   y++;
               }
               if(x==y){
                   ans++;
               }
           }
           else{
                if(s[j+1]=='1'){
                   y++;
               }
               else{
                   x--;
               }
               if(s[j-1]=='1'){
                   x++;
               }
               else{
                   y--;
               }
               if(x==y){
                   ans++;
               }
           }
       }
       if(s[n-1]=='0'){
           if(s[n-2]=='1'){
               x--;
           }
           else{
               y++;
           }
       }
       else{
           if(s[n-2]=='1'){
               x++;
           }
           else{
               y--;
           }
       }
       if(x==y){
           ans++;
       }
       cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}