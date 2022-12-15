#include<iostream>
#include<cmath>
using namespace std;
 
void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
    fastio();
    float a,b;
    cin>>a>>b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a/b)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(a/b)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(a/b)<<endl;
    








return 0;}
