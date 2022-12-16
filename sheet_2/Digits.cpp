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
int x=10,t;
cin>> t;
long long arr[t];
for (int i = 0; i < t; i++)
{
    cin>> arr[i];
}


for (int i = 0; i < t; i++)
{

    while (arr[i]!=0)
    {
        cout<<arr[i]%x<<" ";
        arr[i]/=10;
    }
    cout<<"\n";
}




return 0;}