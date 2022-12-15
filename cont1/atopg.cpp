#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){
    fastio();
string s;
cin >> s;
string ss =s+s;
string t=s+s;


reverse(t.begin(),t.end());

if (t==ss)
{
    cout<<"TOP G";
}else
{
    cout<<"GEEKY";
}


return 0 ;}