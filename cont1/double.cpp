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

int t,x,y;
cin >> t ;

for (int i = 0; i < t; i++)
{
    cin>>x>>y ;
    if (y % 2 != 0 )
    {
        cout<<"yes"<<endl;
    }else
    {
        cout<<"no"<<endl;
    }
    
}








return 0;}