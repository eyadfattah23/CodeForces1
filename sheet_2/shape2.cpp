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

unsigned int n,spaces;
cin >> n;
spaces = n;

for (int i = 0; i < n; i++) 
{
    for (int k = spaces-2; k >= 0; k--)
    {
        cout<<" ";
    }
    spaces--;
    
    for (int j = 0; j < i+1; j++)
    {
        cout<<"*";
    }
    for (int l = 0; l < i; l++)
    {
        cout<<"*";
    }
    
    cout<<"\n";
}




return 0;}