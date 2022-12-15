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
char s;
int n;

cin>>s>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}

for (int j = 0; j < n; j++)
{
    
    for (int k = 0; k < arr[j]; k++)
    {
        cout<<s;
    }
    cout<<"\n";
    
}








return 0;}