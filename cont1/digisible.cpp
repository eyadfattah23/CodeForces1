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
    unsigned long long n,nn,sum_digits=0;
    cin >> n;nn=n;
    if(n == 0){
        cout<<"NO";
        return 0;
    }
    while (nn!=0){
    {
        sum_digits+=(nn%10);
        nn/=10;
    }
    }
   if(n%sum_digits == 0){
    cout<<"YES";
   }
    else
    {
        cout<<"NO";
    }
    

   
    



return 0;}