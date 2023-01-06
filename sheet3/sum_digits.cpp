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
    unsigned int n,sum=0;
    string a;
    cin >> n ;
    cin>>a;
    
    
    for (int i = 0; i < n; i++)
    {
        sum = sum + (int) a[i] - '0';
    }
    
    cout << sum ;
    



return 0;}