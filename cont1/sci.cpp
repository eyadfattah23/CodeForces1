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
    int n ;
    double bits = 0 ;
    cin >> n;
    if (n == 0)
    {
        cout<<0;
        return 0;
    }
    
    for (int i = 2; i <= n; i++)
    {
        bits += log2(i);
    }
    cout << (int)bits + 1 ;
   
    



return 0;}