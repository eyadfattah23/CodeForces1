#include<bits/stdc++.h>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}


int main(){
    fastio();
   
    for (int t = 0; t < 1; t++)
    {
        int att_n=0;
        string days = "0101010101";
        for (int i = 0; i < 10; i++)
        {
            if (days[i] == '1')
            {
                att_n+=1;
            }
            
        }
        if ((att_n *100/ 10) >= (50))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
    
   
    



return 0;}