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
   {
    


    int a[] ={2,0,0,5};
    for (int i = 4-1; i >= 0; i--)
    {
        if (a[i] == 0)
        {
            for (int j = i; j < 4-1; j++)
            {
                int tmp = a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
            
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<a[i]<<" ";
    }
    

























    
   }
    
    



return 0;}