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
   string x,y;
   cin>>x>>y;
   int s1=0,s2=0;
   for (int i = 0 , j=0; i < x.length() , j<y.length(); i++,j++)
   {
      if ((int)x[i]<(int)y[j]){
         cout<<x;
         return 0;
      }
      if ((int)x[i]>(int)y[j]){
         cout<<y;
         return 0;
      }

   }
   if (x.length()<= y.length()){
      cout<<x;
   }else
   {
      cout<<y;
   }
   
   
   
   




    



return 0;}