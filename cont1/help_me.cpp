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
    unsigned long long int n,res=1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        res*=2;
    }
    cout << res%(1000000000+7) ;
    



return 0;}