#include<iostream>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){

int a,b;char s;
cin>>a>>s>>b;

if (s == '+'){
    cout<<a+b;
}else if (s=='-')
{
    cout<<a-b;
    /* code */
}else if(s=='*'){
    cout<<a*b;

}else if(s=='/') {
    cout<<a/b;

}




return 0;}