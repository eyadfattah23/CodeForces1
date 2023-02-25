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

bool issubsequence(string s1, string s2)
{
    int n = s1.length(), m = s2.length();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    /*If i reaches end of s1,that mean we found all
    characters of s1 in s2,
    so s1 is subsequence of s2, else not*/
    return i == n;
}

int main()
{
    fastio();
    int times = 1;
    cin >> times;
    for (int t = 0; t < times; t++)
    {
        string negm,gerg;
        cin >> negm >> gerg;
        if (issubsequence(gerg,negm))
        {
            cout<<"Gerges\n";
        }else if (issubsequence(negm,gerg))
        {
            cout<<"Negm\n";
        }else
        {
            cout<<"Tie\n";
        }
        
        
        
        
    }

    return 0;
}