#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())

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





long long sum(long long arr[],int n,int m){
    long long sum = 0;
    for (int i = n-1; i >= n-m; i--)
    {
        sum+=arr[i];
    }
    return sum;
}




















int main(){
    fastio();
   int times =1;
   // cin >> times;
   for (int t = 0; t < times; t++)
   {
   int n,m;
   cin >> n>>m;
   long long arr[n];
   for (int i = 0; i < n; i++)
   {
    cin>>arr[i];
   }
   


    cout<<sum(arr,n,m);















   
   }
    
    



return 0;}