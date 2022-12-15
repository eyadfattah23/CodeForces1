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

unsigned int n,x;
cin >> n;
x=n;
for (int i = 0; i < n; i++)
{
    for (int j = x; j > 0;j--)
    {
        cout<<"*";
    }
    cout<<"\n";
    --x;
}



return 0;}