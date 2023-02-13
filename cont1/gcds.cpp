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
    unsigned int n,x;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int gcd=a[0];
    for (int j = 0; j < n; j++)
    {
        gcd = __gcd(gcd,a[j]);
    }
    
    cout<<gcd<<endl;

    
   
    



return 0;}