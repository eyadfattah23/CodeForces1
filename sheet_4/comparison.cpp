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
    string s,s1,s2,st,min;
    cin >> s;
    int sz1=1,sz2=1,i=0,j=1;
    s1=s.substr(0,sz1);
        sort(all(s1));
        s2=s.substr(1,sz(s)-1);
        sort(all(s2));
        st=s1+s2;
    min=st;    
    for (int l = 0; l < sz(s)-1; l++)
    {
        s1=s.substr(0,sz1);
        sort(all(s1));
        sz1++;
        s2=s.substr(l+1,sz(s)-l-1);
        sort(all(s2));
        st=s1+s2;
        if (min.compare(st) > 0)
        {
            min=st;
        }
        


        

        

    }
    cout<<min;





























    
   }
    
    



return 0;}