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

    unsigned int k,s,x,y,z,num=0;
    cin>> k >> s;
   
    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            z=s-x-y;
            if(z>=0 && z<=k )num+=1;
        }
        
    }
    cout<<num<<endl;
    

return 0;}