#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x. size())

void fastio()
{
   ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr); 
}
string decimal_to_binary(int x){
    string binary;
    while(x> 0){
    binary += (x % 2) + '0';
    x/=2;}
    reverse(all (binary));
    return binary ;
}
unsigned ll power(unsigned ll n, unsigned ll pow){
    unsigned ll  r = 1;
    for (int i = 0; i < pow; i++)
    {
        r*=n;      
    }
    return r;
}

int main(){
    fastio();
   int times =1;
   // cin >> times;
   for (int t = 0; t < times; t++)
   {
    unsigned ll x,res=0 ,n;cin>>x>>n;

    for (int i = 2; i <= n; i+=2)
    {
        if (i %2 ==0)
        {
        res += power(x,i);
        }
        
    }
    
    cout<<res;


























    
   }
    
    



return 0;}