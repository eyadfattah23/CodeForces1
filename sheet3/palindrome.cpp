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
    unsigned int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0 , j = n-1; i <= j; i++,j--)
    {
        if (a[i] != a[j]){
            cout<<"NO";
            return 0;
        }
    }
   cout<<"YES"<<endl; 
    




return 0;}