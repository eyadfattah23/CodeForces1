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
    int n;
    cin >> n;
    unsigned int a[n],b[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    
    sort(a,a+n);
    sort(b,b+n);

for (int i = 0; i < n; i++)
{
    if (a[i] != b[i])
    {
        cout<<"no";
        return 0;
    }
    
}
cout<<"yes"<<endl;    
    



return 0;}