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
    unsigned long long n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if (n == 0)
        {
            cout << 0;
        }
        
        while (n > 0)  
        {
            cout<<n % 10<< " ";
            n /= 10;
        }
        cout<<"\n";
        
    }
    


return 0;}