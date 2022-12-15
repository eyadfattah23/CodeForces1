#include<iostream>
using namespace std;
 
void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
    fastio();

unsigned long long n;
cin >> n;
unsigned long long sum=(n*(n+1))/2;
cout<<sum<<endl;
return 0;
}