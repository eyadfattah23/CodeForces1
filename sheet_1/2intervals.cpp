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

long long l1,r1,l2,r2;
cin >> l1 >> r1 >> l2 >> r2;
long long arr[]={l1,r1,l2,r2};
if(r1<l2 || r2<l1){
    cout <<-1;
}

else
{
    cout << max(l1,l2) << " " << min(r1,r2);
}





return 0;}