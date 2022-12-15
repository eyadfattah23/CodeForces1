#include<iostream>
#include<vector>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}
int main(){
fastio();

int x=0;

do
{
    cin>>x;
    if (x==1999)
    {
        cout<<"Correct\n";
        break;
    }
    else{
        cout<<"Wrong\n";
    }
    
} while (x!=1999);





return 0;}