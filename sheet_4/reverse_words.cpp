#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())

void fastio()
{
   ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr); 
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdin);
#endif // DEBUG
}
string decimal_to_binary(int x){
string binary;
while(x> 0){
binary += (x % 2) + '0';
x/=2;}
reverse(all (binary));
return binary ;
}
int main(){
    fastio();
   int times =1;
   // cin >> times;
   for (int t = 0; t < times; t++)
   {
   
    string s,ans="";
    getline(cin, s);
    stringstream sss(s);
    string str;
    while (sss>>str)
    {
        reverse (str.begin(), str.end());
        ans+=str;
        ans.push_back(' ');
    }
    ans.pop_back();
    cout<<ans;
    



















   }
    
    



return 0;}