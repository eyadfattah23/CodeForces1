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

int main(){
    fastio();
   int times =1;
   cin >> times;
   for (int t = 0; t < times; t++)
   {
    string n;cin >> n;
    unsigned long long num=1;
    int i=0;
    for (i = 0; i < sz(n); i++)
    {
       if (n[i] == '0' ||n[i] == '1')
        {
            continue;
        }
        
        else
        {
            break;
        }
        
        
    }
    if (i==n.size())
        {
            cout<<num;
            return 0;
        }
        
        
    

    




























    
   }
    
    



return 0;}