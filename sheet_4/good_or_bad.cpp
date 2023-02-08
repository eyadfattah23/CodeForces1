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
    int times;
    cin >> times;
    for (int t = 0; t < times; t++)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] =='0' && s[i+1] == '1' && s[i+2] =='0' || s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'){
                cout<<"Good"<<endl;
                break;
            }
            if (i == s.length() - 1)
            {
                cout<<"Bad"<<endl;
                break;
            }
            
        }

    }
    
   
    



return 0;}