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
   // cin >> times;
   for (int t = 0; t < times; t++)
   {
    


    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = n-1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            for (int j = i; j < n-1; j++)
            {
                int tmp = a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

























    
   }
    
    



return 0;}