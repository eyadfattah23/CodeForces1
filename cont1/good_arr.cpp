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

bool areSame(int arr[],
             int n)
{
  int first = arr[0];
 
  for (int i = 1; i < n; i++)
    if (arr[i] != first)
      return 0;
  return 1;
}

int main()
{
    fastio();
    int times = 1;
    cin >> times;
    for (int t = 0; t < times; t++)
    {
        int n;cin >> n; int arr[n];
        for (int id = 0; id < n; id++)
        {
            cin>>arr[id];
        }
        if (areSame(arr,n) )
        {
            cout<<0<<endl;
            continue;
        }
        
        int idx_min=  min_element(arr,arr+n) - arr,idx_max=max_element(arr,arr+n) - arr;
        while (areSame(arr, n) == false )
        {
            arr[idx_max]-=arr[idx_min];
            idx_min = min_element(arr,arr+n) - arr;
            idx_max = max_element(arr,arr+n) - arr;
        }
        cout<<arr[0]<<endl;
        
    }

    return 0;
}