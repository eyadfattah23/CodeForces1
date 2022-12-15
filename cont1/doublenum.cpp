#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){

fastio();

unsigned long long n , t ;unsigned int num=0;  
cin >> n;
t=n;
while (t!=0)
{
    t/=10;
    num+=1;
}
int arr[num];

for (int i = num-1; i >= 0; i--)
{
    arr[i]=n%10;
    n/=10;
}

for (int i = 0; i < num; i++)
{
    arr[i]=(arr[i]*2)%10;
}
for (int i = 0; i < num; i++)
{
    cout<<arr[i];
}






return 0;}