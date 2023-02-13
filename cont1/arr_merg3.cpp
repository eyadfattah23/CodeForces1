#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x. size())

void fastio()
{
   ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr); 
#ifdef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w",stdin);
#endif // DEBUG
}
string decimal_to_binary(int x){
    string binary;
    while(x> 0){
    binary += (x % 2) + '0';
    x/=2;}
    reverse(all (binary));
    return binary ;
}

int main(){
    fastio();
   int times =1;
   // cin >> times;
    unsigned int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(b,b+m);
    int i = 0,j=0;
    while (i<n)
    {
        while (j<m)
        {
            if (b[j]<a[i])
            {
                cout<<b[j];
                j++;
            }
            else
            {
                cout<<a[i];
                break;
            }
            
            
        }
        i++;
    }

    if (i<n)
    {
        while (i<n)
        {
            cout<<a[i];
            i++;
        }
        
    }else if (j<m)
    {
        while (j<m)
        {
            cout<<b[j];
            j++;
        }
        
    }
    
    





















    
   
    
    



return 0;}