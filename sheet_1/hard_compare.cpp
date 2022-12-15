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

 long long  a,b,c,d;
cin >> a >> b >> c >> d;

if (b*log10(a)> d*log10(c))
{
    /* code */
    cout<<"YES"<<endl;
}else
{
    cout<<"NO"<<endl;
}



return 0;}