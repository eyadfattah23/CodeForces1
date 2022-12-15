#include<iostream>
using namespace std;
void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
fastio();

float a,b;char s;
cin >> a>>s>>b;
if(a<b && s=='<' || a>b && s=='>' || a==b && s=='='){
    cout<<"Right\n";
}
else{
    cout<<"Wrong\n";
}





return 0;}