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
int x[n];

for (int i = 0; i < n; i++)
{
    cin >> x[i];
}
sort(x,x+n);

cout<<x[n-1];





return 0;}    