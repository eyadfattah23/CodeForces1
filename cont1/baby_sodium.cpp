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
    int n ;long long times=0;
    cin >> n;
    string nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        for (int j = 0; j < nums[i].size(); j++)
        {
            if (nums[i].substr(j,3) =="789")
            {
                nums[i][j+2]='7';
                times+=1;
            }
            
        }
        cout<<times<<" ";
        times=0;
    }
    

    

   
    



return 0;}