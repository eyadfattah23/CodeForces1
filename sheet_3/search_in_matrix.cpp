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
    int n  ,m ;
    cin >> n >> m;
    unsigned int a[n][m] , x;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cin>>x;
    
    for (int i = 0; i <  n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == x)
            {
                cout<<"will not take number";
                return 0;
            }
            
        }
        
    }
    
   cout<<"will take number";
    



return 0;}