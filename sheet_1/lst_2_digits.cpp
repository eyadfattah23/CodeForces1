#include<iostream>
using namespace std;
void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
fastio();

 long long  a,b,c,d,x;
cin >> a >> b >> c >> d;
x=((a%100)*(b%100)*(c%100)*(d%100))%100;

if (x==0){
        cout<<0<<0;
}
else if (x%10==x){
    cout<<0<<x<<endl;
}
else{
    cout<<((a%100)*(b%100)*(c%100)*(d%100))%100;
    }
    






 return 0;}