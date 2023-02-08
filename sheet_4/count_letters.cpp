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
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i+1] != s[i])
        {
            cout <<s[i]<<" : "<< num+1<<endl;
            num =0;
        }
        else
        {
            num+=1;
        }
        
        
    }
    
   
    



return 0;}