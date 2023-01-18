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
   int n,m;
   cin >> n >> m;
   unsigned int a[n][m],tmp;
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m; j++)
    {
        cin>>a[i][j];
    }
    
   }
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m/2; j++)
    {
        tmp=a[i][j];
        a[i][j]=a[i][m-j-1];
        a[i][m-j-1]=tmp;


    }
    
   }
   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m; j++)
    {   
        
        cout<<a[i][j]<<" ";
        
    }
            cout<<"\n";
    
   }
   
   
   
    



return 0;}