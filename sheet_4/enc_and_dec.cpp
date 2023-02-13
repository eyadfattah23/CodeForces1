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
    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string org="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int q;
    cin>>q;
    string s;
    cin>>s;
    if (q==1)
    {
        for (int i = 0; i < s.length(); i++)
        {
            int idx = find(org .begin(), org.end(),s[i])-org.begin();
            s[i] = key[idx];
        }
        
    }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            int idx = find(key .begin(), key.end(),s[i])-key.begin();
            s[i] = org[idx];
        }
        
    }
    
    
    
    cout<<s;


return 0;}