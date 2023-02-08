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
    unsigned int n,m;
    cin >> n >> m;
    int a[n],b[n],res[m+n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        res[i] = a[i];
        }

    for (int j = 0; j < m; j++){cin>>b[j];}
    
    sort(b,b+m);

    for (int i = n,j=0; i < m+n; i++,j++)
    {
        res[i] = b[j];
    }
    
    
    for (int i = 0; i < m+n; i++)
    {
        cout<<res[i];
    }
    
    
   
    



return 0;}