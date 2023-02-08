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
    unsigned long long t , n=0;
    cin >> t;
    n = n+ (t/7);
    if (t%7 >= 5)
    {
        n+=1;
    }
    cout<<n<<endl;
   
    



return 0;}