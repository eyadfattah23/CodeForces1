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
    unsigned int n;
    cin >> n;
    unsigned int a[n],x;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>x;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
        cout<<i;
        return 0;
        }
        
    }
    cout<<-1;
    



return 0;}