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

unsigned long long powers(int n,int pow){
    unsigned ll res=n;
    for (int i = 1; i <= pow; i++)
    {
        res*=res;
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
        int m,n;
        cin >> m >> n;
        string code;
        for (int i = 0; i < m; i++)
        {
            char c;
            cin>>c;
            code.push_back(c);
        }
        for (int i = m-1; i >= 0; i--)
        {
            if((code[i]-'a')%2 ==0){
                n=powers(n,(code[i]-'a'+1));
            }else
            {
                n=n*(code[i]-'a'+1);
            }
            
        }
        cout<<n%(1000000000+7);

        
    }

    return 0;
}