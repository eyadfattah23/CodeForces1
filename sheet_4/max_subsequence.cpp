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
   int n,maximum=0,tmp_max = 1;
   cin >> n;
   string s,t="";
   cin >> s;
   for (int i = 0; i < n; i++)
   {
    if (s[i] != t.back())
    {
        t.push_back(s[i]);
    }
    
   }
   cout << t.length() << endl;

    


return 0;}