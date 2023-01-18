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
    int n;
    cin >> n;
    int a[n][n];
    long long mainsum = 0 ,secsum = 0 ,absdf;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
        
    }
    for (int i = 0 ,j =0; i < n , j < n; i++ , j++)
    {
            mainsum += a[i][j];
    }
    for (int i = 0 , j = n-1; i < n , j >=0 ; i++,j--)
    {
        secsum+=a[i][j];
    }
    absdf = mainsum - secsum;
    if (absdf < 0)
    {
        cout<<absdf*-1;
    }else
    {
        cout<<absdf;
    }
    
    
    

    
    



return 0;}