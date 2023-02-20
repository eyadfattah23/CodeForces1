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

int main()
{
    fastio();
    int times = 1;
    // cin >> times;
    for (int t = 0; t < times; t++)
    {

        int n;
        cin >> n;
        string s,ps;
        cin >> s;
        ps = s;
        for (int i = 0; i < n; i++)
        {
            ps[i]='F';
            ps[i+1]='P';
            string rps = ps;
            reverse(all(rps));
            if (rps == ps) 
            {
                cout<<"YES";
                return 0;
            }
            ps = s;
            
            


        }
        cout<<"NO";

    }
    return 0;

}