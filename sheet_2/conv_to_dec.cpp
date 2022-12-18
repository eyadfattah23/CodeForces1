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

    unsigned long long n,j;
    cin >> n;
    int sum =1;
    
    while (true)
    {
        j=n%2;
        n/=2;
        if(j == 1)sum+=1;
        if (n == 0)
        {
            break;
        }
        
    }
    
    cout<<sum<<endl;
return 0;}