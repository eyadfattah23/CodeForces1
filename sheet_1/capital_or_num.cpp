#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;







void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
    fastio();
    char c; 
    cin >> c;
    if(c<65){
        cout <<"IS DIGIT";

    }else if(c>=65 && c<=90){
        cout<<"ALPHA\nIS CAPITAL";
    }else{
        cout<<"ALPHA\nIS SMALL";
    }
    



    return 0;}
