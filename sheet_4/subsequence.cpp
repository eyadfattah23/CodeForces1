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
    string s,sub = "hello";
    cin >> s;
    int sub_idx=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == sub[sub_idx]){
            sub_idx++;
        }
    }
    if (sub_idx == 5)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }
    
    
   
    



return 0;}