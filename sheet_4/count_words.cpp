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
    getline(cin, s);
    unsigned int n=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {  
            if ((int)s[i-1]>=65 && (int)s[i-1] <= 90 || (int)s[i-1]>=97 && (int)s[i-1] <= 122 )
            {
                n+=1;
            }
            
        }
        if (s[i] == '!' || s[i] == '?' || s[i] == ',' || s[i] == '.' && s[i+1] != '.' && s[i-1] !='.')
        {
            n+=1;
            i+=2;
        }
        
        
    }
    cout<<n;
    

   
    



return 0;}