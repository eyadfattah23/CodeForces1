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

long long int n,t;int num=0 ;
cin >> n;
t=n;

while (t!=0)
{
    t/=10;
    num+=1;
}
int arr[num];

for (int i = 0; i < num; i++)
{
    arr[i]=n%10;
    n/=10;
}

sort(arr,arr+num);

for (int i = 0; i < num; i++)
{
    cout<<arr[i];
}




return 0;}


