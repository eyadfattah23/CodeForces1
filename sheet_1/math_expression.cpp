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

float a,b;char s,q='=';double c;

cin>>a>>s>>b>>q>>c;

if(a+b==c || a*b==c || a-b==c){
    cout<<"Yes"<<endl;
}
else{
    if (s=='+')
    {
        cout<<a+b<<endl;
    }
    else if(s=='-'){
        cout<<a-b<<endl;   
    }
    else if (s=='*')
    {
        cout<<a*b<<endl;   
    }
}


return 0;}

