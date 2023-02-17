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
    int n;
   cin>>n;
   int arr[26]={0};
   for (int i = 0; i < n; i++)
   {
    char c;cin >> c;
    arr[c-'a']+=1;
   }
   for (int i = 0; i < 26; i++)
   {
    if (arr[i]!=0)
    {
        while (arr[i]>0)
        {
        cout<<(char)(i+'a');
            arr[i]-=1;
        }
        
    }
    
   }
   

   
    
   
    



return 0;}