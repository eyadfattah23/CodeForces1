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
    int t,x,y;
    cin>> t;
    for (int i = 0; i < t; i++)
    {
        cin>> x>> y;
        int l =min(x,y) , m =max(x,y) , sum=0;
        for (int j = l+1; j < m; j++)
        {
            if (j % 2 == 0)
            {
                continue;
            }
            else{
                sum+=j;
            }
            
        }
        
        cout<<sum<<endl;
    }
    


return 0;}