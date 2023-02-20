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
    int times;
    cin >> times;
    for (int t = 0; t < times; t++)
    {
        int n;cin >> n;
        int arr[2*n],no_even = 0 ,no_odd = 0;
        for (int size = 0; size < n*2; size++)
        {
            cin >> arr[size];
            if (arr[size] % 2 == 0) no_even +=1;
            else
            {
                no_odd +=1;
            }
            
        }
        if (no_even == no_odd)
        {
            cout<<"Yes"<<endl;
        }else
        {
            cout<<"No"<<endl;
        }
        
        
    }
    
   
    



return 0;}