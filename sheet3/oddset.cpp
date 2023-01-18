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
    int t ,n;
    cin>>t;
    for (int times = 0; times < t; times++)
    {
        cin>>n;
        int a[n*2];
        for (int nm = 0; nm < n*2; nm++)
        {
            cin>>a[nm];
        }
        for (int i = 0; i < n * 2 ; i+=2)
        {
            if ((a[i] + a[i+1]) % 2 == 0 ){
                cout<<"No";
                break;
            }
        }
        
    }
    
   
    



return 0;}