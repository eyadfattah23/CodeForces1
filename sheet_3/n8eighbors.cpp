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
       int n,m,x,y;
       cin >> n >> m;
       char a[n][m];
       for (int i = 0; i < n; i++)
       {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
       }
        cin >> x >> y;
       int xx= x-1 , yy= y-1;
       if (a[xx][yy-1] == '.' || a[xx][yy+1] == '.' || a[xx+1][yy+1] == '.' || a[xx+1][yy] == '.' || a[xx+1][yy-1] == '.' || a[xx-1][yy-1] == '.' || a[xx-1][yy] == '.' || a[xx-1][yy+1] == '.')
       {
        cout<<"no";
        return 0;
       }

       cout<<"yes";
    



return 0;}