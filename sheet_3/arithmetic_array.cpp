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
    int t,n;
    cin>>t;
    for (int times = 0; times < t; times++)
    {
        cin>>n;
        int a[n];
        long long sum = 0;
        for (int nn = 0; nn < n; nn++)
        {
            cin>>a[nn];
            sum+=a[nn];
        }
        if (sum == n)
        {
            cout<<0<<endl;
        }
        if (sum <= 0 || sum < n && sum >0)
        {
            cout<<1<<endl;
        }
        if (sum > n){
            cout<<sum - n<<endl;
        }
        
        
        
    }
    
   
    



return 0;}