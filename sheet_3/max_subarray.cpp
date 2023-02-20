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
    int t ,n,a;
    cin>>t;
    for (int times = 0; times < t; times++)
    {
        cin>>n;
        int a[n];
    long long count=0 ;
        for (int nn = 0; nn < n; nn++)
        {
            cin>>a[nn];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                for (int k = i; k <= j; k++)
                {
                
                    if (a[k]<=a[k+1])
                    {
                        count+=1;
                    }
                    
                }
                
            }
            
        }
        
        cout<<count/3<<endl;
    }
    
    
   
    



return 0;}