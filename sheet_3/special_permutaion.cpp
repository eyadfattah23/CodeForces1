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
    int t , n;
    cin >> t;
    for (int times = 0; times < t; times++)
    {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            a[i]=i+1;
        }
        int tmp;
        for (int j = 1; j < n; j+=2)
        {
            tmp = a[j-1];
            a[j-1]=a[j];
            a[j]=tmp;
        }
        if (a[n-1] == n)
        {
        tmp = a[n-1];
        a[n-1]=a[0];
        a[0]=tmp;
        }
        
        for (int k = 0; k < n; k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
        
    }
    
   
    



return 0;}