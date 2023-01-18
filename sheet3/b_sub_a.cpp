#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}



int main(){
    fastio();
    int n, m;
    bool result;
    cin >> n >> m;
    long long a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0 ,j = 0;
    while (i < m && j < n)
    {
        if(b[i] == a[j]){
            i++;
        }
        j++;
    }
    if (i == m){
        cout<<"YES"<<endl;
        return 0;
    }else
    {
        cout<<"NO"<<endl;
        return 0;
    }

return 0;}