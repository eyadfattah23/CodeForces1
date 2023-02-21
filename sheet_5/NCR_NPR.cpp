#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())

void fastio()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
string decimal_to_binary(int x)
{
    string binary;
    while (x > 0)
    {
        binary += (x % 2) + '0';
        x /= 2;
    }
    reverse(all(binary));
    return binary;
}

unsigned long long factorial(int n){
    unsigned ll res=1;
    for (int i = 1; i <= n; i++)
    {
        res*=i;
    }
    return res;
}

int main()
{
    fastio();
    int times = 1;
    // cin >> times;
    for (int t = 0; t < times; t++)
    {
        int n,r;
        cin>>n>>r;
        cout<<(factorial(n))/(factorial(r)*factorial(n-r))<<" ";
        cout<<factorial(n)/factorial(n-r);
        
        




    }

    return 0;
}