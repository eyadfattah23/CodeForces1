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

unsigned int n;
bool is_prime = true;
cin >> n;

if (n==1 || n==0)
{
    is_prime= false;
    cout<<"NO";
    return 1;
}
else{
    for (int i = 2; i < n/2; i++)
    {
        if(n%i == 0){
            is_prime= false;
            break;
        } 
    }
    
}
if(is_prime==true){
    cout<<"YES"<<endl;
}
else
{
cout<<"NO"<<endl;
}



return 0;}
