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
    long long a[n],sum=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum < 0)
    {
        cout<< sum *-1 ;
    }else
    {
        cout<< sum;
    }
    
    




return 0;}