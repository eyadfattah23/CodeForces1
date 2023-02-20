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
    int a[n],lnum=100000,idx;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < lnum)
        {
            lnum=a[i];
            idx=i+1;
        }
        
    }
    cout<<lnum<<" "<<idx;
    

return 0;}