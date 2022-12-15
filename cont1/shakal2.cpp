#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

void fastio()
{
   ios_base::sync_with_stdio(false);
cin.tie(NULL); 
cout.tie(NULL); 
}

int main(){
    fastio();

    char ch;
    int n;
    unsigned long long int moves;
    cin >>  ch >> n>>moves;

    if((int)ch % 2 != 0 && n%2 ==0 && moves % 2 != 0){
        cout<<"black";
    }
    else if ((int)ch % 2 != 0 && n%2 ==0 && moves % 2 == 0)
    {
        cout<<"white";
    }
    else if ((int)ch % 2 != 0 && n%2 !=0 && moves % 2 != 0)
    {
        cout<<"white";
    }
    else if ((int)ch % 2 != 0 && n%2 !=0 && moves % 2 == 0)
    {
        cout<<"black";

    }else if ((int)ch % 2 == 0 && n%2 ==0 && moves % 2 != 0)
    {
        cout<<"white";
    }else if ((int)ch % 2 == 0 && n%2 ==0 && moves % 2 == 0)
    {
        cout<<"black";
    }else if ((int)ch % 2 == 0 && n%2 !=0 && moves % 2 != 0)
    {
        cout<<"black";
    }else if ((int)ch % 2 == 0 && n%2 !=0 && moves % 2 == 0)
    {
        cout<<"white";
    }
    
    
    
    
    
    


return 0;}