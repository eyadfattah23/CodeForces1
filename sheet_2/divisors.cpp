#include<iostream>
#include<algorithm>
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

for (int i = 1; i <= n; i++)
{
    if (n % i == 0)
        {cout<<i<<endl;}
}





return 0;}






