#include<iostream>
#include<algorithm>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){
    fastio();

unsigned int n,spaces;
cin >> n;
spaces = n;

 int i,j,s;
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++)
             cout<<" ";
        for(j=1;j<=i*2-1;j++)
             cout<<"*";
        cout<<endl;
    }
    for(i=n;i>=1;i--){
         for(s=1;s<=n-i;s++)
            cout<<" ";
        for(j=1;j<=i*2-1;j++)
            cout<<"*";
        cout<<endl;
    }
  



return 0;}