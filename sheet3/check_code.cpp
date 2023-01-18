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
    int a,b;
    string s;
    cin>>a >> b >> s ;
    if (s[a] != '-')
    {
        cout<<"No";
        return 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (i == a)
        {
            continue;
        }
        
        if ((int)s[i] < 48 || (int)s[i] > 57)
        {
            cout<<"No";
            return 0;
        }
        
    }
    cout<<"Yes";

    
    
   
    



return 0;}