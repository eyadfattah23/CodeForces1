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


unsigned long long check_sides(int a,int b,int c){
    long long sides_sum = a+b+c,max_side;
    max_side = max(a,max(b,c));
    sides_sum -= max_side;
    if (max_side< sides_sum)
    {
        return 0;
    }
    else
    {
        return max_side - sides_sum +1;
    }
    
    

    
}
int main()
{
    fastio();
    int times = 1;
    // cin >> times;
    for (int t = 0; t < times; t++)
    {
        int a,b,c;
        cin >> a >> b >> c ;
        cout<<check_sides(a,b,c)<<endl;
    }

    return 0;
}