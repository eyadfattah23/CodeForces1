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

unsigned int n;
cin >> n;
cout << n/365<<" years"<<"\n" <<(n%365)/30<<" months"<< "\n"<<((n%365)%30)<<" days" <<endl;







return 0;}