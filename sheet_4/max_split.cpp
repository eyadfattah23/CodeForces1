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
    string s;
    cin >> s;
    int i=0,j=1,nl=1,nr=0,tot=0;

    while (i<sz(s))
    {
        if (s[j] == s[i])
        {
            nl++;
        }
        else
        {
            nr++;
        }
        if (nl == nr)
        {
            tot++;
            nl = 1;
            nr = 0;
            i = j+1;
            j+=2;
            continue;
        }
        
        j++;
    }

    cout<<tot<<endl;
    
        int ii=0,jj=1,numl=1,numr=0;
        while (ii<sz(s))
        {
        if (s[jj] == s[ii])
        {
            numl++;
        }
         else
        {
            numr++;
        }
        if (numl==numr)
        {   
            cout<<s.substr(ii,numl+numr)<<endl;
            numl=1;
            numr = 0;
            ii = jj+1;
            jj+=2;
            continue;
        }
        jj++;
        

        
        

    }
    
    
    }
    
    




























    
   
    
    



return 0;}