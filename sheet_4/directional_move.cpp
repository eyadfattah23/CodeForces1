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
    cin >> times;
    for (int t = 0; t < times; t++)
    {
        int n,moves,zeros = 0,ones=0;
        cin >> n;
        string s;
        cin >> s;
        for (int c = 0; c < sz(s); c++)
        {
            if (s[c] == '0')
            {
                zeros++;
            }else
            {
                ones++;
            }
        }
        if (zeros == ones)
        {
            cout<<"E"<<endl;
        }
        
        
        else if (zeros>ones)
        {
            moves = zeros - ones;
            int laps=moves % 4; 
            if (moves == 0 || laps ==0)
            {
                cout<<"E"<<endl;
            }else if ( moves == 1 || laps == 1)
            {
                cout<<"S"<<endl;
            }else if (moves == 2 || laps == 2)
            {
                cout<<"W"<<endl;
            }else if (moves == 3 || laps == 3)
            {
                cout<<"N"<<endl;
            }
  
        }else if (ones>zeros)
        {
            moves = ones - zeros;
            int laps = moves % 4;
            if (moves == 0 || laps ==0)
            {
                cout<<"E"<<endl;
            }else if ( moves == 1 || laps == 1)
            {
                cout<<"N"<<endl;
            }else if (moves == 2 || laps == 2)
            {
                cout<<"W"<<endl;
            }else if (moves == 3 || laps == 3)
            {
                cout<<"S"<<endl;
            }

        }
        
        
        
        
    }

    return 0;
}