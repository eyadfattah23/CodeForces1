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
    int times ;
    cin >> times;
    for (int t = 0; t < times; t++)
    {
        double n,p;int att_n=0;
        cin >> n>>p;
        string days;
        cin >> days;
        for (int i = 0; i < n; i++)
        {
            if (days[i] == '1')
            {
                att_n+=1;
            }
            
        }
        if ((att_n *100/ n) >= (p))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if (((120-n+att_n)*100/120) >= (p) )
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
        }
        
    }
    
   
    



return 0;}