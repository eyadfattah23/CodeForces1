#include<iostream>
#include<algorithm>
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
    int n;
    cin >> n;
    vector<unsigned long long > fib;
    fib.push_back(0);
    fib.push_back(1);
    for (int i = 2; i <= n; i++)
    {
        fib.push_back(fib[i-1]+fib[i-2]);
    }
    cout<<fib[n-1];
    



return 0;}