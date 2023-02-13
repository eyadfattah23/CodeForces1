#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}


int main(){
    fastio();

    string s,a;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s.substr(i,5)=="EGYPT")
        {
            a.push_back(' ');
            i+=4;
        }else
        {
            a.push_back(s[i]);
        }
        
        
    }
        
   cout<<a;
    



return 0;}