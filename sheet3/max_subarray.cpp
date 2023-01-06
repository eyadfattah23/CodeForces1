#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
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
    vector<int>v;
    cin>>t;
    for (int test = 0; test < t; test++)
    {   
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];

        }
        int ll=1;
        for (int j = 0; j < n; j++)
        {
            v.push_back(a[j]);
        }
        for (int l = 0 , m=l+1 ; l < n-1 , m < n; l++,m++)
        {
            v.push_back(max(a[l],a[m]));
        }
        for (int g = 0 , gl=1 , gk=2 ; g < n ; g++)
        {
            /* code */
        }
        
        
        
    }
    
for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}



return 0;}