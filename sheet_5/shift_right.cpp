#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x. size())

void fastio()
{
   ios_base::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr); 
}
string decimal_to_binary(int x){
    string binary;
    while(x> 0){
    binary += (x % 2) + '0';
    x/=2;}
    reverse(all (binary));
    return binary ;
}

int main(){
    fastio();
   int times =1;
   // cin >> times;
   for (int t = 0; t < times; t++)
   {int n,x;
   cin >> n >> x;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   for (int j = 0; j < x; j++)
   {
    for (int i = n-1; i >0 ; i--)
   {
    int tmp = arr[i];
    arr[i] = arr[i-1];
    arr[i-1] = tmp;
   }
   }

   for (int i = 0; i < n; i++)
   {
    cout<<arr[i]<<" ";
   }
   
   
   
   
   
    




























    
   }
    
    



return 0;}