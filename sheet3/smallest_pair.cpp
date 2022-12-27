#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){
    fastio();
    unsigned int t;
    cin >> t;
    for (int k = 0; k < t; k++)
    {
        unsigned int n;
        cin>>n;
    int a[n]; int smp=10000000;
        for (int p = 0; p < n; p++)
        {
            cin>>a[p];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[i] + a[j] + j + 1 - i - 1 < smp)
                {
                    smp = a[i] + a[j] + j - i ;
                }
                
            }
            
        }
        
        
    cout<<smp<<endl;
    }
    



return 0;}