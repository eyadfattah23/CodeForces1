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


bool _check_dist(string n){
    char mx_element=*max_element(all(n)),mn_element=*min_element(all(n));
    bool flag = true;
    for (int i = 0; i < sz(n); i++)
    {
        if (flag == false)
        {
            break;
        }
        
        for (int j = i+1; j < sz(n); j++)
        {
            if (n[i] == n[j])
            {
                flag = false;
                break;
            }
            
        }
        
    }
    
    if (n.size()-1 > mx_element-mn_element || flag == false)
    {
        return false;
    }else
    {
        return true;
    }
    
    
}
int main()
{
    fastio();
    int times = 1;
    // cin >> times;
    for (int t = 0; t < times; t++)
    {
        int l,r;
        cin>>l>>r;
        for (int i = l; i <= r; i++)
        {
            string n= to_string(i);
            if (_check_dist(n))
            {
                cout<<i;
                return 0;
            }
            
        }
        cout<<-1;
    }

    return 0;
}