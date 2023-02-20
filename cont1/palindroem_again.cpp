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
        string s,ps,rps;
        cin >> s;
        ps = s;
        reverse(all(ps));
        if(ps == s){
            cout<<"YES";
            return 0;
        }
        int arr[26] = {0};
        for (int i = 0; i < 26; i++)
        {
            arr[s[i]-'a']++;
        }
        if (count(arr,arr+26,1)>1)
        {
            cout<<"NO";
            return 0;
        }
        
        for (int i = 0; i < n; i++)
        {
            ps=s;
            for (int j = i+1; j < n; j++)
            {
                char tmp= ps[i];
                ps[i] = ps[j];
                ps[j] = tmp;
                rps=ps;
                reverse(all(rps));
                if(rps == ps){
                cout<<"YES";
                return 0;
                    }
            }
            
        }
        cout<<"NO";
        
    }

    return 0;
}