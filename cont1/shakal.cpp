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
    int moves;
    cin >>  ch >> n>>moves;
 if ((int)ch%2 !=0)
 {
    if (n%2 == 0)
    {
        if (moves %2 !=0)
        {
            cout<<"white";
        }
        else if (moves %2 ==0)
        {
            
            cout<<"black";
        }
        
    }else if (n%2 != 0)
    {
        if (moves %2 !=0)
        {
            
        }
        
    }
    
    
 }
 
return 0;}