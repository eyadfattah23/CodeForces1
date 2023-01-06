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
    int a[n]; 
        for (int p = 0; p < n; p++)
        {
            cin>>a[p];
        }
        int smp= a[0] +a[1] + 1 - 0;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[i] + a[j] + j - i < smp)
                {
                    smp = a[i] + a[j] + j - i ;
                }
                
            }
            
        }
        
        
    cout<<smp<<endl;
    }
    



return 0;}