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
        int days,workers;
        cin >> workers >> days;
        unsigned long long best[workers],id=0,id2=0;
        int arr[days][workers];
        for (int k = 0; k < days; k++)
        {
            for (int l = 0; l < workers; l++)
            {
                cin>>arr[k][l];
            }
            
        }
        for (int i = 0; i < workers; i++)
        {
            unsigned ll col_sum=0;
            for (int j = 0; j < days; j++)
            {
                col_sum+=arr[j][i];
            }
            best[i]=col_sum;
            
        }
        unsigned ll* idd=best; 
        for (int ii = 0; ii < workers; ii++)
        {
            if (best[ii]>=*idd)
            {
                idd=&best[ii];
            }
            
        }
        

        id = idd-best;
        
        
        
       cout<<id+1;

       
        
        
    }

    return 0;
}