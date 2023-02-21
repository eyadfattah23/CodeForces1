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






















void print_mat(int b[],int r, int c,int a[][c]){
for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            b[i][j]+=a[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<'\n';
    }
}



int main(){
    fastio();
   int times =1;
   // cin >> times;
   for (int t = 0; t < times; t++)
   {
    int r,c;
    cin>>r>>c;
    int a[r][c],b[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
        
    }
    
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>b[i][j];
        }
        
    }
    
    
   


















   
   }
    
    



return 0;}